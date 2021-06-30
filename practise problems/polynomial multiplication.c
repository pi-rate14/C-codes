 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct pol
{
       int cof,exp;
       struct pol *next;
};
void read_poly(struct pol *head)
{
       struct pol *newterm,*temp;
       char ch;
       printf("\nEnter another term? (Y/N) : ");
       getchar();
       scanf("%c",&ch);
       head->next=NULL;
       while(ch!='n')
       {
           newterm=(struct pol *)malloc(sizeof(struct pol));
           printf("\nEnter the coefficient value : ");
           scanf("%d",&newterm->cof);
           printf("\nEnter the exponential value : ");
           scanf("%d",&newterm->exp);
           newterm->next=NULL;
           if(head->next==NULL)
           {
                head->next=newterm;
                temp=newterm;
           }
           else
           {
               temp->next=newterm;
               temp=newterm;
           }
           printf("\nEnter another term? (Y/N) : ");
           getchar();
           scanf("%c",&ch);
       }
}
void mult_poly(struct pol *p,struct pol *q,struct pol *r)
{
       int cof,exp;
       r->next=NULL;
       p=p->next;
       q=q->next;
       struct pol *node,*temp,*last,*ptr;
       temp=q;
       while(p!=NULL)
       {
          q=temp;
          while(q!=NULL)
          {
             cof=p->cof*q->cof;
             exp=p->exp+q->exp;
             if(r->next==NULL)
             {
                node=(struct pol *)malloc(sizeof(struct pol));
                node->cof=cof;
                node->exp=exp;
                node->next=NULL;
                r->next=node;
                last=node;
             }
             else
             {
                ptr=r->next;
                while(ptr!=NULL)
                {
                   if(ptr->exp!=exp)
                      ptr=ptr->next;
                   else
                      break;
                }
                if(ptr!=NULL)
                {
                   ptr->cof+=cof;
                }
                else
                {
                   node=(struct pol *)malloc(sizeof(struct pol));
                   node->cof=cof;
                   node->exp=exp;
                   node->next=NULL;
                   last->next=node;
                   last=node;
                }
             }
          q=q->next;
          }
       p=p->next;
       }
}
void delt(struct pol *head)
{
   struct pol *ptr,*ptr1;
   ptr=head->next;
   while(ptr!=NULL)
     {
          ptr1=ptr;
          ptr=ptr->next;
          free(ptr1);
     }
}
void traverse(struct pol *head)
{
     printf("\n");
     struct pol *ptr=head->next;
     while(ptr!=NULL)
     {
          printf(" %dX%d+",ptr->cof,ptr->exp);
          ptr=ptr->next;
     }
     printf("\n");
}
int main()
{
    int ch;
    struct pol *p,*q,*r;
    p=(struct pol *)malloc(sizeof(struct pol));
    q=(struct pol *)malloc(sizeof(struct pol));
    r=(struct pol *)malloc(sizeof(struct pol));
    do
    {
        printf("\n..MENU..\n1. Enter Polynomial\n2. Multiply Polynomial\n3. Exit\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
                  case 1: printf("\nEnter polynomial A : ");
                          read_poly(p);
                          traverse(p);
                          printf("\n\nEnter polynomial B : ");
                          getchar();
                          read_poly(q);
                          traverse(q);
                          break;
                  case 2: mult_poly(p,q,r);
                          printf("\nMultiplied polynomial is: ");
                          traverse(r);
                          break;
                  case 3: exit(0);
        }
    }while(1);
    delt(p);
    delt(q);
    delt(r);
    getchar();
}
