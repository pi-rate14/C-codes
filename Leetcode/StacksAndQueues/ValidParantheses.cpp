// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

#include <iostream>
#include <string>
#include <stack>
using namespace ::std;
int main()
{
    stack<char> para;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            para.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!para.empty() && para.top() == '(')
            {
                para.pop();
            }
            else
            {
                para.push(s[i]);
            }
        }
        else if (s[i] == '}')
        {
            if (!para.empty() && para.top() == '{')
            {
                para.pop();
            }
            else
            {
                para.push(s[i]);
            }
        }
        else if (s[i] == ']')
        {
            if (!para.empty() && para.top() == '[')
            {
                para.pop();
            }
            else
            {
                para.push(s[i]);
            }
        }
    }
    cout << para.empty();
    return 0;
}