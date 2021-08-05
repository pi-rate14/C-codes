#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
long long power(long long x, long long y)
{
    ll mod = 10;
    long long result = 1;
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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int numRows = 5;
    vector<vector<ll>> nums(numRows, vector<ll>(1));
    cout << numRows << "\n";
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            ll result = power(11, i);
            nums[i].push_back(result);
            cout << nums[i][j];
        }
    }
    // for (int i = 0; i < numRows; i++)
    // {
    //     ll result = power(11, i);
    //     //ll result = power(11, i, i + 1);
    //     cout << "result: " << result << "\n";
    //     nums[i].push_back(result);
    // }
    // for (int i = 0; i < numRows; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << nums[i][j];
    //     }
    //     cout << "\n";
    // }
    return 0;
}
