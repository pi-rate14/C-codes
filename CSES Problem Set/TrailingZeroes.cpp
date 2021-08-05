#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ctr5, temp;
    ctr5 = n / 5;
    temp = ctr5;
    while (temp != 0)
    {
        ctr5 += temp / 5;
        temp /= 5;
    }
    cout << ctr5;
    return 0;
}