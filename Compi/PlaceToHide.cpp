#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n, ctr = 0;
        cin >> a >> b >> x >> y >> n;
        ll product = INT_MAX;
        while (a >= x && b >= y && ctr <= n)
        {

            ll producta = (a - 1) * b;
            ll productb = (b - 1) * a;

            cout << "productA" << producta << "\n";
            cout << "productB" << productb << "\n";

            producta > productb ? b-- : a--;
            if (a >= x && b >= y)
            {
                product = min(producta, productb);
            }

            cout << "product: " << product << "\n";
            cout << "a value: " << a << "\n";
            cout << "b value: " << b << "\n";

            ctr++;
        }
        cout << product << "\n";
    }

    return 0;
}