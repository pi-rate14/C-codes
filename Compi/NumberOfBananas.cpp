#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, bns;

    cin >> n;
    bns = n;
    vector<ll> vec;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        vec.push_back(temp);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (vec[i + 1] > vec[i])
        {
            bns++;
            continue;
        }
        if (vec[i] > vec[i + 1])
        {
            bns++;
            continue;
        }
    }
    cout << bns;
    return 0;
}