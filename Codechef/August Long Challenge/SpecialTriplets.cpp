//TIME LIMIT EXCEEDED FOR 2 TASKS
#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

void solve() {
    ll x;
    ll ctr = 0;
    cin >> x;
    if (x < 3) {
        cout << 0 << "\n";
        return;
    }
    map<ll, ll> m;
    for (ll i = 1;i <= x;i++) {
        m[i]++;
    }
    for (ll i = 1;i <= x;i++) {
        for (ll j = 2;j <= x;j++) {
            if (m.count(i % j) > 0 && j % (i % j) == 0) {
                ctr++;
            }
        }
    }
    // for(ll i=1;i<x;i++){
    //     if(m.count(i%(i+1)) > 0 && (i+1)%(i%(i+1))==0){
    //         ctr++;
    //     }
    // }
    cout << ctr << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}