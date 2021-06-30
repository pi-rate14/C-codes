#include<iostream>
using namespace std;
int main()
{
      int f=0, s=1, i, n, ser=0;
      cout<<"Enter n: ";
      cin>>n;
      cout<<"Fibonacci Series: ";
      for(i=0 ; i<n ; i++)
     {
        if(i <= 1)
            {
                ser=i;
            }
        else
            {
                ser=f + s;
                f=s;
                s=ser;
            }
        cout<<ser<<" ";
      }
      cout<<endl;
    return 0;
}
