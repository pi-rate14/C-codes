#include<stdio.h>
#include<conio.h>
int optimal()
{
    int fr[5],i,j,k,t[5],p=1,flag=0,page[25],psz,nf,t1,u[5];
    printf("\nEnter the number of pages");
    scanf("%d",&psz);
    printf("\nEnter the page sequence:");
    for(i=1; i<=psz; i++)
        scanf("%d",&page[i]);
    printf("enter the number of frames:");
    scanf("%d",&nf);




    for(i=1; i<=nf; i++)
        fr[i]=-1;
    for(i=1; i<=psz; i++)
    {
        if(full(fr,nf)==1)
           break;
        else
        {
            flag=0;
            for(j=1; j<=nf; j++)
            {
               if(page[i]==fr[j])
                {
                    flag=1;
                    printf("          \t%d:\t",page[i]);
                    break;
                }
            }
            if(flag==0)
            {
                fr[p]=page[i];
                printf("          \t%d:\t",page[i]);
                p++;
            }

            for(j=1; j<=nf; j++)
                printf(" %d  ",fr[j]);
            printf("\n");
        }
    }
    p=0;
    for(; i<=psz; i++)
    {
        flag=0;
        for(j=1; j<=nf; j++)
        {
            if(page[i]==fr[j])
            {
                flag=1;
                break;
            }
        }
       if(flag==0)
        {
            p++;
            for(j=1; j<=nf; j++)
            {
                for(k=i+1; k<=psz; k++)
                {
                    if(fr[j]==page[k])
                    {
                        u[j]=k;
                        break;
                    }
                    else
                        u[j]=21;
                }
            }
            for(j=1; j<=nf; j++)
                t[j]=u[j];
            for(j=1; j<=nf; j++)
            {
                for(k=j+1; k<=nf; k++)
                {
                    if(t[j]<t[k])
                    {
                        t1=t[j];
                        t[j]=t[k];
                        t[k]=t1;
                    }
                }
            }
            for(j=1; j<=nf; j++)
            {
                if(t[1]==u[j])
                {
                    fr[j]=page[i];
                    u[j]=i;
                }
            }
            printf("page fault\t");
        }
        else
            printf("          \t");
        printf("%d:\t",page[i]);
        for(j=1; j<=nf; j++)
            printf(" %d  ",fr[j]);
        printf("\n");
    }
    printf("\nTotal page faults:  %d",p+3);
    float hit_ratio = (psz-(p+3))/psz;
    float miss_ratio = 1-hit_ratio;
    printf("\nHit Ratio is %f",hit_ratio);
    printf("\nMiss Ratio is %f",miss_ratio);

}
int full(int a[],int n)
{
    int k;
    for(k=1; k<=n; k++)
    {
        if(a[k]==-1)
            return 0;
    }
    return 1;
}
int fifo()
{
int i,j,n,a[50],frame[10],no,k,avail,count=0;
            printf("\n Enter the number of pages: ");
scanf("%d",&n);
            printf("\n Enter the page reference string : ");
            for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
            printf("\n Enter the number of frames : ");
            scanf("%d",&no);
for(i=0;i<no;i++)
            frame[i]= -1;
                        j=0;
                        printf("\tref string\t page frames\n");
for(i=1;i<=n;i++)
                        {
                                    printf("%d\t\t",a[i]);
                                    avail=0;
                                    for(k=0;k<no;k++)
if(frame[k]==a[i])
                                                avail=1;
                                    if (avail==0)
                                    {
                                                frame[j]=a[i];
                                                j=(j+1)%no;
                                                count++;
                                                for(k=0;k<no;k++)
                                                printf("%d\t",frame[k]);
}
                                    printf("\n");
}
                        printf("Page Fault Is %d ",count);
                        float hit_ratio = (n-count)/n;
                        printf("\nHit ratio is %f ",hit_ratio);
                        float miss_ratio = 1-hit_ratio;
                        printf("\nMiss ratio is %f ",miss_ratio);
                        return 0;
}
int main()
{
    float result;
    int choice, num;
    printf("Press 1 for optimal algorithm\n");
    printf("Press 2 for FIFO\n");

    scanf("%d",&choice);
    switch (choice) {
    case 1: {
        optimal();
        break;
    }
    case 2: {
        fifo();
        break;
    }

    default:
        printf("wrong Input\n");
    }
    return 0;
}


//0 7 1 0 2 1 2 3 0 3 2 4 0 3 0 2 0 1 7
