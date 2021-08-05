#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ctr = 0;
        cin >> n >> k;
        int lim = (n / 2) + 1;
        if (k > lim)
        {
            cout << n % lim << "\n";
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                if (n % i > ctr)
                {
                    ctr = n % i;
                }
            }
            cout << ctr << "\n";
        }
    }
    return 0;
}