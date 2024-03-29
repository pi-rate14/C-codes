// Chefland has 7 days in a week. Chef is very conscious about his work done during the week.

// There are two ways he can spend his energy during the week. The first way is to do x units of work every day and the second way is to do y (>x) units of work for the first d (<7) days and to do z (<x) units of work thereafter since he will get tired of working more in the initial few days.

// Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.

// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, four integers d, x, y, z.
// Output
// For each testcase, output in a single line the answer to the problem.

// Constraints
// 1≤T≤5⋅103
// 1≤d<7
// 1≤z<x<y≤18

#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, x, y, z, way1, way2;
        cin >> d >> x >> y >> z;
        way1 = 7 * x;
        way2 = y * d + (7 - d) * z;
        cout << max(way1, way2) << "\n";
    }
    return 0;
}