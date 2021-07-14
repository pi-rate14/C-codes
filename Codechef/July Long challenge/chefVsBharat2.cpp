#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
#define mod 1000000007

ll power(ll x, ll y)
{
    ll result = 1;
    while (y != 0)
    {
        if (y % 2 == 0)
        {
            x = ((x % mod) * (x % mod)) % mod;
            y = floor(y / 2);
        }
        else
        {
            result = ((result % mod) * (x % mod)) % mod;
            y--;
        }
    }
    return result;
}

ll findChefora(ll n)
{
    ll temp = n;
    ll result = 0;
    if (n < 10)
    {
        result = n;
    }
    else if (n >= 10)
    {
        n /= 10;
        while (n != 0)
        {
            temp = temp * 10 + n % 10;
            n /= 10;
        }
        result = temp;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll chefora[100001] = {0};
    ll sum[100001] = {0};
    for (ll i = 1; i < 100001; i++)
    {
        chefora[i] = findChefora(i);
        sum[i] = sum[i - 1] + chefora[i];
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll left, right;
        cin >> left >> right;
        ll exp = sum[right] - sum[left];
        cout << power(chefora[left], exp) << "\n";
    }
    return 0;
}
