#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    //write your code here
    int t;
    cin >> t;
    while (t--)
    {
        vector<ll> vec, ans;
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            if (i % 2 == 0)
            {
                vec.push_back(temp);
            }
        }

        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
    return 0;
}
