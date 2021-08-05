#include<iostream>
using namespace::std;
int main()
{
    int arr[5],t,i,d=0;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        for(int j=0;j<4-1;j++)
        {
            if (arr[j]>>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+i]=temp;
            }
        }
    }
    cout<<endl<<"enter target";
    cin>>t;
    for(i=0;i<5;i++)
    {
        d = t-arr[i];
        if(d==0||d<0)
        {
            cout<<endl<<"target reached"<<endl;
            for(int  j=0;j<=i;j++)
            {
                cout<<endl<<arr[j];
            }
        }
    }
}
