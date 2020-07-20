#include<iostream>
using namespace::std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    cout << a>b?a>c?a:b>c?b:c;
