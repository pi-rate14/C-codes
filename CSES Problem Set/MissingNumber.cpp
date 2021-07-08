#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    int n, temp;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        if (vec[i] != i + 1)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}