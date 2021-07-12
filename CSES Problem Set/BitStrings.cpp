#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
long long mod = 1000000007;
long long power(int a, int b)
{

    long long pow = 1;
    while (b)
    {
        if (b & 1)
        {
            pow = (pow % mod * a % mod) % mod;
            --b;
        }
        a = (a % mod * a % mod) % mod;
        b = (b % mod / 2) % mod;
    }
    return pow;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << power(2, n);
    return 0;
}