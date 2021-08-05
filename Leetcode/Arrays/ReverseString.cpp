#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        //[a,b,c,d]
        for (int i = s.size() - 1, j = 0; i >= s.size() / 2, j < s.size() / 2; i--, j++)
        {
            char temp = s[i];
            cout << "temp: " << temp << "\n";
            s[i] = s[j];
            s[j] = temp;
        }
    }
};

int main()
{
    Solution s;
    vector<char> c{'h', 'e', 'l', 'l', 'o'};
    s.reverseString(c);
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
}