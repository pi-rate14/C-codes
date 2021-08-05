#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    long digits = 0;
    int temp = x;
    while (temp)
    {
        auto d = div(temp, 10);
        digits = digits * 10 + d.rem;
        temp = d.quot;
    }

    return digits == x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x = -12321;
    cout << x;
    cout << isPalindrome(x);
    return 0;
}