#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int g1,s1,b1,g2,s2,b2;
    int t;
    cin >> t;
    while(t--){
        cin >> g1 >> s1>>b1>>g2>>s2>>b2;
        if(g1+s1+b1 > g2+b2+s2){
            cout << 1 <<"\n";
        }else{
            cout << 2 <<"\n";
        }
    }
    return 0;
}