#include <bits/stdc++.h>
using namespace ::std;

void printSub(int i, string s, string temp)
{
    if (i == s.size())
    {
        cout << "";
        return;
    }

    temp += s[i];
    cout << temp << "\n";
    printSub(i + 1, s, temp);
    temp.pop_back();
    printSub(i + 1, s, temp);
}

int main()
{
    string s = "abc";
    printSub(0, s, "");
    return 0;
}