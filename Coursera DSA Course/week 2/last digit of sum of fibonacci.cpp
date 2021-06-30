
#include<vector>
#include<iostream>
using namespace::std;
int main(){
    long long n;
    cin>>n;
    vector<long long> fibo(n);
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++){
        // fibo[i]=fibo[i-1]+fibo[i-2];
        fibo[i] = (fibo[i-1]+fibo[i-2])%10;
    }
    for (int i=0; i<n; i++){
        cout<<fibo[n];
    }


}

