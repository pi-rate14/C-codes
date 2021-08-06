//TIME LIMIT EXCEEDED

#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

ll fact(ll digits) {
    if (digits == 0)
        return 1;
    return(digits * fact(digits - 1));
}

int noOfDigits(ll product) {
    int digits = 0;
    while (product) {
        product /= 10;
    }
    return digits;
}

bool valid(ll i) {
    ll temp = i, product = 1;
    int digits = 0;
    int tempdigit = 0;
    while (temp) {
        if (temp % 10 == 0) {
            return 0;
        }
        else {
            product *= temp % 10;
            temp /= 10;
            digits++;
        }

    }
    if (product >= fact(digits)) {
        cout << i << " is valid." << "\n";
        return 1;
    }

    else {
        cout << i << " is invalid." << "\n";
        return 0;
    }

}

void solve() {
    ll n;
    cin >> n;
    ll invalid = 0;
    ll ans = 0;
    for (int i = 0;i <= n;i++) {
        ans += valid(i);
    }
    cout << ans - 1 << "\n";
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