#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll y, x;
        cin >> y >> x;
        ll z = x > y ? x : y;
        ll diag = z * (z - 1) + 1;
        ll answer;
        if (z % 2 == 0)
        {
            answer = diag + y - x;
        }
        else
        {
            answer = diag + x - y;
        }
        cout << answer << "\n";
    };
    return 0;
}
