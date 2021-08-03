#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> students{0, 0, 0, 1, 1, 1, 1, 0, 0, 0};
    vector<int> sandwiches{1, 0, 1, 0, 0, 1, 1, 0, 0, 0};
    queue<int> q;
    vector<int> v(2, 0);
    for (int i = 0; i < sandwiches.size(); i++)
    {
        q.push(students[i]);
        v[students[i]]++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    int i = 0;
    while (!q.empty())
    {
        int f = q.front();
        if (!v[sandwiches[i]])
            break;
        q.pop();
        if (f == sandwiches[i])
        {
            v[f]--;
            i++;
        }
        else
            q.push(f);
    }

    cout << q.size();
}