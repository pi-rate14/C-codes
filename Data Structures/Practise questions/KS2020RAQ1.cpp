/*
There are N houses for sale. The i-th house costs Ai dollars to buy. You have a budget of B dollars to spend.

What is the maximum number of houses you can buy?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a single line containing the two integers N and B. The second line contains N integers. The i-th integer is Ai, the cost of the i-th house.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of houses you can buy.

Limits
Time limit: 15 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
1 ≤ B ≤ 105.
1 ≤ Ai ≤ 1000, for all i.
Test set 1
1 ≤ N ≤ 100.
Test set 2
1 ≤ N ≤ 105.
*/

#include <bits/stdc++.h>
using namespace ::std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, b, sum = 0, result = 0;
        cin >> n >> b;
        vector<int> houses(n);
        for (int j = 0; j < n; j++)
        {
            cin >> houses[j];
        }
        sort(houses.begin(), houses.end());
        for (int j = 0; j < n; j++)
        {
            if (b >= houses[j])
            {

                // House bought so increase the number of ans
                result++;

                // Since House is bought so decrease the cost of house from budget
                b -= houses[j];
            }
        }
        cout << "Case #" << i + 1 << ": " << result << "\n";
    }
}