#include <bits/stdc++.h>
using namespace ::std;

class Solution
{
public:
    int g(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            int x = n % 10;
            ans += (x * x);
            n = n / 10;
        }
        return ans;
    }
    bool isHappy(int n)
    {
        bool h[810] = {0};
        while (1)
        {
            int x = g(n);
            if (x == 1)
            {
                return true;
                break;
            }
            else if (h[x] == 1)
            {
                return false;
                break;
            }
            else
            {
                h[x] = 1;
                n = x;
            }
        }
    }
};