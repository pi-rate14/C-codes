#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll e, k, ctr = 0;
        cin >> e >> k;
        while (e != 0)
        {
            e /= k;
            ctr++;
        }
        cout << ctr << "\n";
    }
    return 0;
}