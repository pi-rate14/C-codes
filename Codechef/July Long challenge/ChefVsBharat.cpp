#include <bits/stdc++.h>
using namespace ::std;

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

long long findChefora(int i)
{
    long long temp = i;
    int n = i / 10;
    while (n != 0)
    {

        temp = temp * 10 + n % 10;
        n = n / 10;
    }
    return temp;
}

void fillChefora(vector<long long> &chefora, vector<long long> &sum)
{
    chefora.push_back(0);
    sum.push_back(0);
    for (int i = 1; i < 100; i++)
    {
        long long result = findChefora(i);
        sum.push_back(sum[i - 1] + result);
        chefora.push_back(result);
    }
}

int main()
{
    int t;
    cin >> t;
    vector<long long> chefora;
    vector<long long> sum;
    fillChefora(chefora, sum);

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        long long RLsum = sum[r] - sum[l];
        cout << power(chefora[l], RLsum) << "\n";
    }
    return 0;
}
