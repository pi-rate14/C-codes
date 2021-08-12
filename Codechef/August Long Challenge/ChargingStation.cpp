//PARTIALLY CORRECT ANSWER
#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

void solve() {
    ll n, ctr = 0, l = 0, r;
    vector<ll> ans;
    cin >> n;
    vector<pair<pair<ll, ll>, ll>> inp(n);
    for (int i = 0;i < n;i++) {
        ll temp;
        cin >> temp;
        inp[i].first.first = temp;
    }
    for (int i = 0;i < n;i++) {
        ll temp;
        cin >> temp;
        inp[i].first.second = temp;
        inp[i].second = i + 1;
    }
    sort(inp.begin(), inp.end());
    int flag = 0;
    for (ll i = 0;i < inp.size();i++) {
        if (inp[i].first.first > inp[i].first.second)
            continue;
        if (i == 0) {
            r = inp[i].first.first;
            ans.push_back(inp[i].second);
            ans.push_back(l);
            ans.push_back(r);
            l = r;
            ctr++;
            continue;
        }
        if (inp[i].first.second - l >= inp[i].first.first) {
            r = inp[i].first.first + l;
            ans.push_back(inp[i].second);
            ans.push_back(l);
            ans.push_back(r);
            l = r;
            ctr++;
        }
    }
    cout << ctr << "\n";
    for (ll i = 0;i < ans.size();i++) {
        cout << ans[i] << " ";
        if ((i + 1) % 3 == 0)
            cout << "\n";

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