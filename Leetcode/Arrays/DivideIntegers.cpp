#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int res = 0;
        long long int a = abs((long long)dividend);
        long long int b = abs((long long)divisor);

        while (a >= b)
        {
            long long s = b, temp = 1;
            while ((s << 1) < a) // left sift i.e s*2^1
            {
                s <<= 1;
                temp <<= 1;
            }
            res += temp;
            a -= s;
        }
        if ((dividend > 0) ^ (divisor > 0))
            res = -res;
        else
            res = res;
        return res > 0 ? (res > INT_MAX ? INT_MAX : res) : (res < INT_MIN ? INT_MIN : res);
    }
};