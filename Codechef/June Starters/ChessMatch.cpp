#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll res;
        res = 2 * (180 + n) - (a + b);
        cout << res << "\n";
    }
    return 0;
}