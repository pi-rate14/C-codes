
#include<iostream>
using namespace::std;

long long gcd(long long n1, long long n2){
        if (n2==0){
            return n1;
        }else{
            long long temp = n1%n2;
            gcd(n2,temp);
        }
}

int main(){
    long long n1,n2;
    cin>>n1;
    cin>>n2;
    long long result = gcd(n1,n2);
    cout<<(n1*n2)/result;
}

