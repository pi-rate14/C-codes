#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> heights{1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    string s = "abcdefghijklmnopqrstuvwxyz";
    int ctr = 0, maxV = 0;
    map<char, int> charac;
    for (char c : s)
    {
        charac[c] = ctr;
        ctr++;
    }
    string inp;
    cin >> inp;
    for (char c : inp)
    {
        maxV = max(maxV, heights[charac[c]]);
    }

    cout << maxV * inp.size();
    return 0;
}