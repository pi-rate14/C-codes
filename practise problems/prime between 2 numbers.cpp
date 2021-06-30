#include<iostream>
using namespace::std;
void prime(int a, int b)
{
   int i=0,j=0,ctr=0;
   //if(a%2==0)
    //a+=1;
   for(i=a;i<=b;i+=2)
   {
       if (i == 1 || i == 0)
       {
           continue;
       }
       bool ctr=1;
       for(j=2;j*j<=i;j++)
       {
           if(i%j==0)
           {
               ctr=0;
               break;
           }
       }
       if(ctr==1)
       {
           cout<<i<<endl;
       }
   }
}
int main()
{
    double n,b,a,arr[20];
    int j=0;
    cin>>n;

    for(int i=0;i<2*n;i+=2)
    {
        cin>>a;
        cin>>b;
       arr[i]=a;
       arr[i+1]=b;

    }
    for(int i=0;i<n;i++)
    {
        prime(arr[j],arr[j+1]);
        j+=2;
        cout<<endl;
    }
    return 0;
}
