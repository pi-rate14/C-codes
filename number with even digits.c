#include<iostream.h>
using namespace::std;
int main()
{
    int a = {12,345,2,6,7896};
    int nctr=1,ectr=0;
    int len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++)
    {
        while(a[i]!=0)
        {
            a/=10;
            nctr++;
        }
        if(nctr%2==0)
        {
            ectr++;
        }
    }
    cout<<ectr;
}

