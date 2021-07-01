// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

// Given the integer n, return the number of complete rows of the staircase you will build.

#include <bits/stdc++.h>
class Solution
{
public:
    int arrangeCoins(long long n)
    {
        //x(x+1)=n
        //x^2+x-n=0
        //x = (sqrt(1+4*n)-1)/2; -b+root(b^2-4ac)/2
        int result = (int)(((int)sqrt(1 + 4 * 2 * n) - 1) / 2);
        return result;
    }
};