#include <bits/stdc++.h>
#define ll long long int
using namespace ::std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    if (((n * (n + 1)) >> 1) % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    vector<ll> set1, set2;
    ll sum = (n * (n + 1)) >> 1 >> 1; // 28
    ll tempsum = 0, i = 1, j = n, ctr = 1;
    cout << "YES\n";
    while (tempsum != sum)
    {
        if (ctr % 2 != 0)
        {
            tempsum += j; //7 //8+6 = 14
            set1.push_back(j);
            j--; // 6 // 5
            ctr++;
        }
        else
        {
            tempsum += i; // 8
            set1.push_back(i);
            i++; // 2
            ctr++;
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (find(set1.begin(), set1.end(), i) == set1.end())
        {
            set2.push_back(i);
        }
    }
    cout << set1.size() << "\n";
    for (ll i = 0; i < set1.size(); i++)
    {

        cout << set1[i] << " ";
    }
    cout << "\n";
    cout << set2.size() << "\n";
    for (ll i = 0; i < set2.size(); i++)
    {

        cout << set2[i] << " ";
    }

    return 0;
}