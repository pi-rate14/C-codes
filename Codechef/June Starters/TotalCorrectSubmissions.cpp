#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> answer;
        map<string, int> map;
        string s;
        ll sVal;
        int n;
        cin >> n;
        n *= 3;
        while (n--)
        {
            cin >> s >> sVal;
            map[s] += sVal;
        }
        for (auto it : map)
        {
            answer.push_back(it.second);
        }
        sort(answer.begin(), answer.end());
        for (auto i : answer)
        {
            cout << i << " ";
        }
    }
    return 0;
}