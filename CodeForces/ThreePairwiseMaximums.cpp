#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
string solve()
{
    int x, y, z;
    vector<int> vect;

    cin >> x;
    vect.push_back(x);
    cin >> y;
    vect.push_back(y);
    cin >> z;
    vect.push_back(z);
    sort(vect.begin(), vect.end());
    if (vect[1] != vect[2])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl
             << vect[0] << " " << vect[0] << " " << vect[2] << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}