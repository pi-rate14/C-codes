#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a + c == 180 && b + d == 180)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}