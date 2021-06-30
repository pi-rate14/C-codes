#include<iostream>
#include<stdlib.h>
using namespace::std;
string kangaroo(int x1, int v1, int x2, int v2) {
    int flag=0;
    int i=1;
    //0 2 5 3
    while(flag==0)
    {
        if((x2>x1)&&(v2>v1))
        {
            flag=0;
            break;
        }
        if((x1+v1!=x2+v2)&&(x1<x2))
        {
            x1 = x1+v1;
            x2 = x2+ v2;
        }
        else
        {
            flag=1;
            break;
        }
        //i++;
    }
    if(flag==1)
    {
        return("YES");
    }
    else
    //if(flag==0)
    {
        return("NO");
    }
}
int main()
{
    int x1,v1,x2,v2;
    for(int i=0;i<100;i++)
    {
        cout<<x1<<" "<<v1<<" "<<x2<<" "<<v2<<endl;
        x1 = rand() % (10000 + 1 - 0) + 0;
        x2 = rand() % (10000 + 1 - 0) + 0;
        v1 = rand() % (10000 + 1 - 0) + 0;
        v2 = rand() % (10000 + 1 - 0) + 0;
        string r = kangaroo(x1,v1,x2,v2);
        cout<<r<<endl;
    }
    return 0;
}

