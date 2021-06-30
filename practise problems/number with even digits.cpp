#include<iostream>
#include<string>
using namespace::std;
int main()
{
    int a[] = {555,901,482,1771};
    int nctr=0,ectr=0;
    int len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++)
    {
        string str = to_string(a[i]);
        if(str.size()%2==0)
        {
            ectr++;
        }
        /*while(a[i]!=0)
        {
            a[i]/=10;
            nctr++;
        }
        if(nctr%2==0)
        {
            ectr++;
        }*/
    }
    cout<<ectr;
}

