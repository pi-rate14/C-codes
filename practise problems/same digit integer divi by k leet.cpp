#include<iostream>
using namespace::std;
int main()
{
     int n,ctr=0,i=1;
     cin >> n;

     if(n%2==0||n%5==0)
     {
         return (-1);
     }
     else{
     while(1)
     {
         if(i%n!=0)
         {
            i=(i*10)+1;
            ctr++;
         }
         else
         {
             break;
         }
     }
     }
     cout<<ctr+1<<endl<<i;
     if(ctr==0)
     {
         return (-1);
     }
}

