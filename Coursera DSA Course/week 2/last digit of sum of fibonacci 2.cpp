
#include<vector>
#include<iostream>
using namespace::std;
int main(){
    long long m,n;
    cin>>m;
    cin>>n;
    int sum = 0;
    vector<long long> fibo(n);
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++){
       // fibo[i]=fibo[i-1]+fibo[i-2];
       fibo[i] = (fibo[i-1]+fibo[i-2])%10;
    }
    for(int i=m;i<=n;i++){
        sum = (sum+fibo[i])%10;
    }
    cout<<sum;

}

