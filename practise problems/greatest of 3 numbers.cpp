#include<iostream>
#include<stdio.h>
using namespace::std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    int num = a>b?(a>c?a:c):(b>c?b:c);
    cout<<num;
    return 0;
}
