#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define max 20
int stack[max], top=-1;
void push(int ch)
{
  if (top == max-1)
   {
      printf("Stack overflow\n");
   }
   else
   {
     top++;
     stack[top]=ch;
   }
}
int  pop()
{
   int ch;
     if (top==-1)
      {
            printf("Stack underflow\n");
      }
      else
      {
               ch=stack[top];
               top--;
      }
      return ch;
}
void disp()
{
  int n;
  printf("items in stack: ");
  for (n=top; n>=0; n--)
  {
    printf("%d, ", stack[n]);
  }
  printf("\n");
}
int evaluation(char st[25])
{
  char temp[25];
  int i,j=0,value=0,c1,c2;
  i=0; top=-1;
  while (st[i]!='\0')
  {
    if ( (st[i]>=48 && st[i]<=57) )
    {
      j=0;
      temp[j]=st[i];
      j++;
      temp[j]='\0';
      push(atoi(temp));
    }
    else
    {
      c2=pop();
      c1=pop();
      switch(st[i])
      {
     case '+' :{
        value=c2+c1;
        break;
     }
     case '-' :{
        value=c2-c1;
        break;
     }
     case '*' :{
        value=c2*c1;
        break;
     }
     case '/' :{
        value=c2/c1;
        break;
     }
       }
     push(value);
    }
   i++;
  }
  value=pop();
  return value;
}
void main()
{
  char st[25],s1[25];
  int value;
  printf("Enter the prefix expression\n");
  scanf("%s",st);
  strcpy(s1,strrev(st));
  value= evaluation(s1);
  printf("Evaluation of Prefix Expression=%d\n", value);
}
//+a*b-/cd*e/ga
