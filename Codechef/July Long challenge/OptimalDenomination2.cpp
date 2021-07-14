#include <bits/stdc++.h>
#define int long long
using namespace std;

int leftArr[1000000], midArr[1000000], rightArr[1000000];

void findGCD(int n)
{
    midArr[1] = leftArr[1];
    rightArr[n] = leftArr[n];
    for (int i = n - 1; i > 0; i--)
    {
        rightArr[i] = __gcd(rightArr[i + 1], leftArr[i]);
    }
    for (int i = 2; i < n + 1; i++)
    {
        midArr[i] = __gcd(midArr[i - 1], leftArr[i]);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int result = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> leftArr[i];
        }
        sort(leftArr, leftArr + n + 1);
        findGCD(n);
        for (int i = 1; i < n + 1; i++)
        {
            sum += leftArr[i];
        }
        int minima = LLONG_MAX;
        for (int i = 1; i < n + 1; i++)
        {
            result = (sum - leftArr[i] + __gcd(midArr[i - 1], rightArr[i + 1])) / __gcd(midArr[i - 1], rightArr[i + 1]);
            if (result < minima)
                minima = result;
        }
        cout << minima << "\n";
    }
    return 0;
}