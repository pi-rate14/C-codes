#include<vector>
#include<iostream>
using namespace::std;
int main(){
    unsigned long long n;
    cin>>n;
    if(n<=1){
        cout<< n;
    } else {
        vector<unsigned long long> fibo(n);
            fibo[0]=0;
            fibo[1]=1;
            for(int i=2;i<=n;i++){
                fibo[i]=fibo[i-1]+fibo[i-2];
            }
            cout<<fibo[n]%10;

    }

}


