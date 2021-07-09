// x = take 2 from a and 1 from b
// y = take 2 from b and 1 from a
// a = 2x + y
// b = 2y + x
//on solving,
// 2a - b = 3x
// 2b - a = 3y
#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (2 * a - b >= 0 && (2 * a - b) % 3 == 0 && 2 * b - a >= 0 && (2 * b - a) % 3 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}