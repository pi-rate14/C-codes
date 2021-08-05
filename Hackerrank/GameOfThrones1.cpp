#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, result = "";
    cin >> s;
    int ctr = 0;
    sort(s.begin(), s.end());
    cout << s << "\n";
    stack<char> st;
    st.push('*');
    st.push(s[0]);
    char temp = s[1];
    int len = s.length();
    for (int i = 1; i < len; i++)
    {
        temp = s[i];
        if (temp == st.top())
        {
            cout << "popping " << st.top() << "\n";
            st.pop();
            cout << "top : " << st.top() << "\n";
        }
        else
        {
            cout << "pushing " << s[i] << "\n";
            st.push(s[i]);
            cout << "top : " << st.top() << "\n";
        }
    }
    if (st.size() == 1 || st.size() == 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}