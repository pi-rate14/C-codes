//INCOMPLETE SOLUTION

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
        op.push_back(make_pair(x1, y1));
    }
    sort(op.rbegin(), op.rend());
    vector<ll> ans(n, 0);
    for (int i = 1;i <= n;i++) {
        if (i % op[0].second != 0) {
            ans[i] = op[0].first;
        }
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