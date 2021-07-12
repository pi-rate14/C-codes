#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char, string> map;
    for (char c : s)
    {
        if (map.count(c))
        {
            map[c] += c;
        }
        else
        {
            map[c] = c;
        }
    }
    string odd = "", first = "", last = "";
    for (auto c : map)
    {
        if (c.second.length() % 2 == 1 && odd != "")
        {
            cout << "NO SOLUTION";
            return 0;
        }
        else if (c.second.length() % 2 == 1)
        {
            odd = c.second;
        }
        else
        {
            first = c.second.substr(0, c.second.length() / 2) + first;
            last += c.second.substr(0, c.second.length() / 2);
        }
    }
    cout << last + odd + first;
    return 0;
}