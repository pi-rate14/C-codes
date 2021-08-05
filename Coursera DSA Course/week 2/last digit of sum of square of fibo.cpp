
#include<vector>
#include<iostream>
using namespace::std;
int main(){
    long long n;
    cin>>n;
    if(n<=1){
        cout<<n;
    }else{
        vector<long long> fibo(n);
    fibo[0]=0;
    fibo[1]=1;
    long long sum = fibo[n];
    for(int i=2;i<=n;i++){
       // fibo[i]=fibo[i-1]+fibo[i-2];
       fibo[i] = (fibo[i-1]+fibo[i-2])%10;
    }
    for(int i=2;i<=n;i++){
       // fibo[i]=fibo[i-1]+fibo[i-2];
       fibo[i] = (fibo[i]*fibo[i])%10;
       sum = (sum+fibo[i])%10;
    }
   cout<<sum;
    }


}


