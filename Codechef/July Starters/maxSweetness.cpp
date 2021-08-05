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
        ll n, d, temp, ctr = 0;
        cin >> n >> d;
        vector<ll> price;
        vector<ll> sweetness;
        while (n--)
        {
            cin >> temp;
            price.push_back(temp);
        }
        n = price.size();
        while (n--)
        {
            cin >> temp;
            sweetness.push_back(temp);
        }
        vector<pair<ll, ll>> sweets;
        for (int i = 0; i < price.size(); i++)
        {
            sweets.push_back(make_pair(sweetness[i], price[i]));
        }
        sort(sweets.rbegin(), sweets.rend());
        int limit = 0;
        int i = 0;
        while (limit < 2 && d > 0)
        {

            d -= sweets[i].second;
            if (d >= 0)
            {
                ctr += sweets[i].first;
                limit++;
                i++;
            }
            else
            {
                d += sweets[i].second;
                i--;
            }
        }

        // for (auto it : sweets)
        // {
        //     cout << "d initial: " << d << "\n";
        //     if (limit < 2)
        //     {
        //         cout << "price: " << it.second << "\n";

        //         d -= it.second;
        //         cout << "d before: " << d << "\n";
        //         if (d >= 0)
        //         {
        //             ctr += it.first;
        //             limit++;
        //         }
        //         else
        //         {
        //             d += it.second;
        //         }
        //         cout << "ctr: " << ctr << "\n";
        //         cout << "d after: " << d << "\n";
        //     }
        // }
        cout << ctr << "\n";
    }
    return 0;
}