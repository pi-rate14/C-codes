#include <iostream>
#include <vector>
#include <map>
using namespace ::std;

int main()
{
    map<char, int> roman;
    roman.insert(pair<char, int>('I', 1));
    roman.insert(pair<char, int>('V', 5));
    roman.insert(pair<char, int>('X', 10));
    roman.insert(pair<char, int>('L', 50));
    roman.insert(pair<char, int>('C', 100));
    roman.insert(pair<char, int>('D', 500));
    roman.insert(pair<char, int>('M', 1000));
    map<char, int>::iterator itr;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (roman[s[i]] < roman[s[i + 1]])
        {
            sum -= roman[s[i]];
        }
        else
        {
            sum += roman[s[i]];
        }
    }
    sum += roman[s[s.length() - 1]];
    cout << sum;
    return 0;
}
