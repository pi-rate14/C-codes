#include<iostream>
using namespace :: std;
int main()
{
    int n;
    cout<< "enter number: ";
    cin >> n;
    if(n>0)
    {
        cout<<"positive";
    }
    else if(n==0)
    {
        cout<<"zero is neither positive nor negative";
    }
    else
    {
        cout<<"negative";
    }
    return 0;
}
