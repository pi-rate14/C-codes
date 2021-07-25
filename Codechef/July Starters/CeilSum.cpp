#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = 0;

        if ((b - a) % 2 == 0)
        {
            ans = ceil((b - a) / 2.0) + 1;
        }
        else
        {
            ans = ceil((b - a) / 2.0);
        }
        if (ans == -0)
        {
            ans = 0;
        }
        if (a == b)
        {
            ans = 0;
        }
        cout << "ans " << ans << "\n";
    }
    return 0;
}