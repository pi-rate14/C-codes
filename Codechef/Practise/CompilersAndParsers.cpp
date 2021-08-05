#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string inp;
        cin >> inp;
        int a = 0;
        stack<char> st;
        // if (inp[0] == '>')
        // {
        //     cout << 0 << "\n";
        //     continue;
        // }
        // else
        // {
        //     st.push(inp[0]);
        // }

        for (int i = 1; i < inp.length(); i++)
        {
            if (inp[i] == '<')
            {
                st.push(inp[i]);
            }
            else
            {

                if (st.empty())
                {
                    continue;
                }
                else
                {
                    st.pop();
                }
            }
            if (st.empty())
                a = max(a, i + 1);
            else
                break;
        }
        cout << a << "\n";
    }
    return 0;
}