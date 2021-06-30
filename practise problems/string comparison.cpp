#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];

    printf("Enter a string\n");
    scanf("%[^\n]%*c", a); ;


    printf("Enter a string\n");
    scanf("%[^\n]%*c", b); ;

    if (strcmp(a,b) == 0)
        printf("The strings are equal.\n");
    else
    printf("The strings are not equal.\n");
/*int len1,len2;
      len1=strlen(a);
      len2=strlen(b);
      for(int i=0;i<len1;i++)
      {
       if(a[i] >= 'a' && a[i] <= 'z')
   continue;
  else if(a[i] >= '0' && a[i] <= '9')
   continue;
  else if(a[i] >= 'A' && a[i] <= 'Z')
   continue;
  else
  printf("First String has special characters\n");
  break;

   }

  for(int i=0;i<len2;i++)
      {
       if(b[i] >= 'a' && b[i] <= 'z')
   continue;
  else if(b[i] >= '0' && b[i] <= '9')
   continue;
  else if(b[i] >= 'A' && b[i] <= 'Z')
   continue;
  else
  printf("Second String has special characters");
  break;
   }*/
 return 0;
}
