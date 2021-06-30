
#include<stdio.h>
int main()
{
    int a,b;
    int result;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Subtraction\n ");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&result);
    switch(result)
    {
    case 1  :
        printf("Addition of %d and %d is : %d",a,b,a+b);
        break;
    case 2  :
        printf("Subtraction of %d and %d is : %d",a,b,a-b);
        break;
    case 3  :
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4  :
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default :
        printf(" Enter valid choice.");
        break;
    }
    return 0;
}
