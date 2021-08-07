//incomplete code
#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> people(n);
    vector<ll> charge(n);
    ll temp;
    for (int i = 0;i < n;i++) {
        cin >> temp;
        people.push_back(temp);
    }
    for (int i = 0;i < n;i++) {
        cin >> temp;
        people.push_back(temp);
    }
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