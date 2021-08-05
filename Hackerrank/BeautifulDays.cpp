#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int isBeautiful(int &x, int &k)
{
    string s = to_string(x);
    cout << "number " << s << "\n";
    reverse(s.begin(), s.end());
    int temp = stoi(s);
    cout << "reversed " << temp << "\n";
    temp = abs(temp - x);
    cout << "temp " << temp << "\n";
    if (temp % k == 0)
        return 1;
    else
        return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, k, res = 0;
    cin >> i >> j >> k;
    for (int x = i; x <= j; x++)
    {
        res += isBeautiful(x, k);
    }
    cout << res;
    return 0;
}