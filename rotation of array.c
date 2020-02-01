#include<stdio.h>
void rotation(int arr[],int n, int r)
{
    int i,j,temp;
    for (i=0;i<r;i++)
    {
        temp=arr[i];
        for(j=0;j<n;j++)
        {
            arr[j]=arr[j+1];
            arr[i]=temp;
        }
    }
}
void main()
{
    int a[100],n,r,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the rotation order");
    scanf("%d",&r);
    rotation(a,n,r);
    for(i=0;i<n;i++)
    {
        printf("/n%d",&a[i]);
    }
}

