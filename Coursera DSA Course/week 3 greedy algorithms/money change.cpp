
#include<iostream>
using namespace::std;
int moneyChange(int m){
    int noOfCoins = 0;
    if (m>=10){
        noOfCoins += m/10;
        m %= 10;
    }
    if (m>=5){
        noOfCoins += m/5;
        m %= 5;
    }
    if(m<5){
        noOfCoins += m;
    }

    return noOfCoins;
}

int main(){
    int m;
    cin >> m;
    int res = moneyChange(m);
    cout<<res;
}
