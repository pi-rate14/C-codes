#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    string name = "xnhtq";
    string typed = "xhhttqq";
    unordered_map<char, int> nameMap;
    unordered_map<char, int> typedMap;
    bool ans;
    for (char c : name)
    {
        nameMap[c]++;
    }
    for (char c : typed)
    {
        typedMap[c]++;
    }
    for (char c : name)
    {
        cout << c << " : nameMap: " << nameMap[c] << " typedMap: " << typedMap[c] << endl;
        if (typedMap[c] >= nameMap[c] && typedMap[c] > 0)
        {
            ans = true;
        }
        else
        {
            ans = false;
            break;
        }
    }
    cout << ans;
    return 0;
}