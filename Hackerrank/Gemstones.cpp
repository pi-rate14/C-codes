#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> arr{"a", "c", "b"};
    vector<set<char>> setVector;

    for (int i = 0; i < arr.size(); i++)
    {
        set<char> charset;
        for (char c : arr[i])
        {
            charset.insert(c);
        }
        setVector.push_back(charset);
    }
    map<char, int> map;
    for (char c : setVector[0])
    {
        map[c]++;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        for (char c : setVector[i])
        {
            if (map.count(c))
                map[c]++;
        }
    }
    int ans = 0;
    for (auto it : map)
    {
        if (it.second == arr.size())
            ans++;
    }
    cout << ans;
    return 0;
}