#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> answer;
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    if (n == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            answer.push_back(i + 1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            answer.push_back(i + 1);
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}