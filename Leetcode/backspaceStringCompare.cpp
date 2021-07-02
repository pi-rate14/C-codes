#include <bits/stdc++.h>
using namespace ::std;
string PrintStack(stack<char> s)
{
    string answer = "";
    // If stack is empty
    if (s.empty())
        return "";

    while (!s.empty())
    {
        char x = s.top();
        cout << x << " ";
        answer += x;
        s.pop();
    }
    return answer;
}
int main()
{
    string s = "ab#c";
    string t = "ad#c";
    stack<char> s1, s2;
    string a = "", b = "";
    for (char x : s)
    {
        if (x == '#')
        {
            if (!s1.empty())
            {
                cout << "popping from s: " << s1.top() << "\n";
                s1.pop();
            }

            else
                continue;
        }
        else
        {
            cout << "pushing in s: " << x << "\n";
            s1.push(x);
        }
    }
    for (char x : t)
    {
        if (x == '#')
        {
            if (!s2.empty())
            {
                cout << "popping from t: " << s2.top() << "\n";
                s2.pop();
            }

            else
                continue;
        }
        else
        {
            cout << "pushing in t: " << x << "\n";
            s2.push(x);
        }
    }
    a = PrintStack(s1);
    cout << "string a: " << a << endl;
    b = PrintStack(s2);
    cout << "string b: " << b << endl;
    if (a == b)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}