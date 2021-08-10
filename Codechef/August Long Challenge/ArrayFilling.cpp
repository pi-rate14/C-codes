
#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> op;
    ll x1, y1;
    for (int i = 0;i < m;i++) {
        cin >> x1;
        cin >> y1;
        op.push_back({ x1,y1 });
    }
    sort(op.begin(), op.end(), greater<pair<ll, ll>>());
    ll sum = 0, left = n, mul = 1;
    for (auto i : op) {
        ll div = i.second;
        ll gcd = __gcd(mul, div);
        div /= gcd;
        sum += (left - left / div) * i.first;
        left /= div;
        mul *= div;
    }
    cout << sum << "\n";
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