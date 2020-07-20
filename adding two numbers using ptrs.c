#include<stdio.h>
int main()
{
    int a,b,*a1,*b1,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    a1= &a;
    b1 = &b;
    sum = *a1+*b1;
    printf("%d",sum);
    return 0;
}
