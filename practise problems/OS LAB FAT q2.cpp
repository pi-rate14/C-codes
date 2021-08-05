#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#define TB 100
using namespace::std;
void allocate();
void deallocate();
void display();
int BFull();
struct Sequence
{
    char n[30];
    int len;
    int st;
}F[30];
int Table[TB],pos=0,r,i,j,ch,B=0;
char fn[30];
contig()
{
     printf("\n Contiguous File Allocation \n\n");
     do{
     printf("\n\n1.Allocate\n2.Deallocate\n3.Display\n4.Exit");
     printf("\n\nEnter Your choice : ");
     scanf("%d",&ch);
     switch(ch)
     {
                case 1:
                    pos++;
                    allocate();
                    break;

                case 2:
                    deallocate();
                    break;

                case 3:
                    display();
                    break;

                case 4:
                    exit(0);

                default:
                    printf("\nInvalid Choice ");
        }
     }while(ch!=4);

}
void allocate()
{
   printf("\nEnter File Name : ");
   scanf("%s",&(F[pos].n));
   printf("\nEnter File Length : ");
   scanf("%d",&(F[pos].len));
   if(BFull())
   {
        pos--;
       printf("\n\nNo Enough Free Space Available \n");
       return;
   }
   while(1)
   {
        i=0;
        r=(rand()%TB+1);
        if(r+F[pos].len-1>TB)
           continue;
        if(Table[r]==0)
        {
                for(i=r+1;i<r+F[pos].len;i++)
                    if(Table[i]==1)
                        break;
        }
        if(i==r+F[pos].len)
            break;


    }
    F[pos].st=r;
    for(i=r;i<r+F[pos].len;i++)
        Table[i]=1;
    printf("\n\tFile Allocation Table\n");
    printf("\nFileName\tStart\tLength\n");
    for(i=1;i<=pos;i++)
    {
        printf("\n%s\t\t%d\t%d",F[i].n,F[i].st,F[i].len);
        printf("\n");
    }

}
void deallocate()
{
   printf("\nEnter The File Name : ");
   scanf("%s",&fn);
   for(i=1;i<=pos;i++)
   {
            if(strcmp(F[i].n,fn)==0)
            {
                    for(j=F[i].st ;j<(F[i].len+F[i].st);j++)
                        Table[j]=0;
                    strcpy(F[i].n,"NULL");
                    F[i].st=0;
                    F[i].len=0;
                    printf("\nFile (%s) Deleted Successfully \n",fn);
                    break;
            }
            else
                printf("\nDeletion Unsuccessful\n");
    }
    printf("\n\t\tFile Allocation Table\n");
    printf("\nFileName\tStart\tLength\n");
    for(i=1;i<=pos;i++)
    {
        printf("\n%s\t\t%d\t%d",F[i].n,F[i].st,F[i].len);
        printf("\n");
    }
}
void display()
{
    printf("\nEnter The File Name : ");
    scanf("%s",fn);
    printf("\nBlocks Allocated Are : ");
    for(i=1;i<=pos;i++)
    {
        if(strcmp(F[i].n,fn)==0)
        {
            for(j=F[i].st;j<(F[i].st+F[i].len);j++)
                printf("--%d--",j);
            break;
        }
    }
}
int BFull()
{
    for(i=1,B=0;i<=pos;i++)
        B=B+F[i].len;
    if(B>TB)
        return 1;
    else
        return 0;
}





void indexed()
{
int f[50], index[50],i, n, st, len, j, c, k, ind,count=0;
for(i=0;i<50;i++)
f[i]=0;
x:printf("Enter the index block: ");
scanf("%d",&ind);
if(f[ind]!=1)
{
printf("Enter no of blocks needed and no of files for the index %d on the disk : \n", ind);
scanf("%d",&n);
}
else
{
printf("%d index is already allocated \n",ind);
goto x;
}
y: count=0;
for(i=0;i<n;i++)
{
scanf("%d", &index[i]);
if(f[index[i]]==0)
count++;
}
if(count==n)
{
for(j=0;j<n;j++)
f[index[j]]=1;
printf("Allocated\n");
printf("File Indexed\n");
for(k=0;k<n;k++)
printf("%d-------->%d : %d\n",ind,index[k],f[index[k]]);
}
else
{
printf("File in the index is already allocated \n");
printf("Enter another file indexed");
goto y;
}
printf("Do you want to enter more file(Yes - 1/No - 0)");
scanf("%d", &c);
if(c==1)
goto x;
else
exit(0);
}






void linked()
{
int f[50], p,i, st, len, j, c, k, a;
for(i=0;i<50;i++)
f[i]=0;
printf("Enter how many blocks already allocated: ");
scanf("%d",&p);
printf("Enter blocks already allocated: ");
for(i=0;i<p;i++)
{
scanf("%d",&a);
f[a]=1;
}
x: printf("Enter index starting block and length: ");
scanf("%d%d", &st,&len);
k=len;
if(f[st]==0)
{
for(j=st;j<(st+k);j++)
{
if(f[j]==0)
{
f[j]=1;
printf("%d-------->%d\n",j,f[j]);
}
else
{
printf("%d Block is already allocated \n",j);
k++;
}
}
}
else
printf("%d starting block is already allocated \n",st);
printf("Do you want to enter more file(Yes - 1/No - 0)");
scanf("%d", &c);
if(c==1)
goto x;
else
exit(0);
}

int main()
{
    float result;
    int choice, num;
    printf("Press 1 for CONTIGUOUS\n");
    printf("Press 2 for INDEXED\n");
    printf("Press 3 for LINKED\n");
    printf("Enter your choice:\n");
    cin >> choice;
    switch (choice) {
    case 1: {
        contig();
        break;
    }
    case 2: {
        indexed();
        break;
    }
    case 3: {
        linked();
        break;
    default:
        printf("wrong Input\n");
    }
    return 0;
    }
}


