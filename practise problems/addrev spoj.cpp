#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace::std;
void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
void addrev(int a, int b)
{
    while(a%10==0)
    {
        a=a/10;
    }
    while(b%10==0)
    {
        b=b/10;
    }
    string a1 = to_string(a);
    string b1 = to_string(b);
    reverseStr(a1);
    reverseStr(b1);
    int a2 = stoi(a1);
    int b2 = stoi(b1);
    int r1 = a2+b2;
    while(r1%10==0)
    {
        r1/=10;
    }
    string r2 = to_string(r1);
    reverseStr(r2);
    int r3 = stoi(r2);
    cout<<r2;
}
int main()
{
    int b,a,n,arr[20];
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
        addrev(arr[j],arr[j+1]);
        j+=2;
        cout<<endl<<endl;
    }
    return 0;
}
