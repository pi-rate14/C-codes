#include<iostream>
using namespace::std;
int main()
{
    int num,prd=1,sum=0,n;
    cin >> num;
     while(num!=0)
     {
         n = num%10;
         prd*=n;
         sum+=n;
         num/=10;
     }
     return (prd-sum);
}
