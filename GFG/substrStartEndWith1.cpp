#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            start++;
    }
    start = (start * (start - 1)) / 2;
    cout << "\n"
         << start;
    return 0;
}