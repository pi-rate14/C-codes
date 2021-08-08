#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> weights;
    ll temp = 0, sum = 0, sum2 = 0;
    for (int i = 0;i < n;i++) {

        cin >> temp;
        sum += temp;
        weights.push_back(temp);
    }

    sort(weights.begin(), weights.end());
    for (int i = 0;i < k;i++) {
        sum2 += weights[i];
    }

    cout << sum - sum2 - sum2 << "\n";
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