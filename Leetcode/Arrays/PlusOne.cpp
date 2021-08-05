#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    vector<int> digits{9, 9, 9};
    // int n = digits.size();
    // vector<int> result;
    // int origin = 0;
    // for (int i = 0; i < digits.size(); i++)
    // {
    //     origin += digits[i] * pow(10, n - 1);
    //     cout << origin << endl;
    //     n--;
    // }
    // origin++;
    // cout << origin << endl;
    // while (origin != 0)
    // {
    //     cout << origin % 10 << endl;
    //     result.insert(result.begin(), origin % 10);
    //     origin /= 10;
    //     cout << origin << endl;
    // }
    // for (auto i = result.begin(); i != result.end(); ++i)
    //     cout << *i << " ";
    int c = 0;
    reverse(digits.begin(), digits.end());
    digits[0] += 1;
    if (digits[0] > 9)
    {
        c = 1;
        digits[0] -= 10;
    }
    for (int i = 1; i < digits.size(); i++)
    {
        digits[i] = digits[i] + c;
        if (digits[i] > 9)
        {
            c = 1;
            digits[i] -= 10;
        }
        else
        {
            c = 0;
            break;
        }
    }
    if (c)
    {
        digits.push_back(1);
    }
    reverse(digits.begin(), digits.end());
    for (auto i = digits.begin(); i != digits.end(); ++i)
        cout << *i << " ";
    return 0;
}