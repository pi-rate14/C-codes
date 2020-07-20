#include<iostream>
using namespace std;
int main()
{
      int f=0, s=1, i, n, sum=0;
      cout<<"Enter n: ";
      cin>>n;
      cout<<"Fibonacci Series: ";
      for(i=0 ; i<n ; i++)
     {
        if(i <= 1)
            {
                sum=i;
            }
        else
            {
                sum=f + s;
                f=s;
                s=sum;
            }
        cout<<sum<<" ";
      }
      cout<<endl;
    return 0;
}
