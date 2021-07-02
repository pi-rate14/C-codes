// In Chefland, the speed of light is c m/s, and acceleration due to gravity is g m/s2.

// Find the smallest height (in meters) from which Chef should jump such that during his journey down only under the effect of gravity and independent of any air resistance, he achieves the speed of light and verifies Einstein's theory of special relativity.

// Assume he jumps at zero velocity and at any time, his velocity (v) and depth of descent (H) are related as
// v2=2⋅g⋅H.
// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, two integers g, c.
// Output
// For each test case, output in a single line the answer to the problem. We can show that under the constraints, the answer is an integer.

// Constraints
// 1≤T≤5⋅103
// 1≤g≤10
// 1000≤c≤3000
// 2⋅g divides c2.
#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g, c;
        cin >> g >> c;
        //v2 = 2gh
        cout << (c * c) / (2 * g) << "\n";
    }
    return 0;
}