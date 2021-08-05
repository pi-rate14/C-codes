#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i=0,j=0,k=0,sum=0;
    printf("enter values of matrix 1");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter values of matrix 2");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                sum += a[i][k]*b[k][j];
            }
        }
    }
     for (i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
}
