// You are the owner of a big company. You are so rich, that the government has allowed you to print as many notes as you want of any single value that you like. You also have peculiar behavioral traits and you often do things that look weird to a third person.

// You have N employees, where the i-th employee has salary Ai. You want to pay them using a denomination that you create. You are also eco-friendly and wish to save paper. So, you wish to pay them using as few notes as possible. Find out the minimum number of notes required if you can alter the salary of at most one employee to any positive integer that you like, and choose the positive integer value that each note is worth (called its denomination).

// Each employee must receive the exact value of his/her salary and no more.

// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// The first line of each test case contains a single integer N.
// The second line contains N integers A1,A2,…,AN, where Ai is the salary of the i-th employee.
// Output
// For each test case, output in a single line the answer to the problem.

// Constraints
// 1≤T≤12⋅104
// 1≤N≤105
// 1≤Ai≤109
// The sum of N over all test cases is at most 106.
#include <bits/stdc++.h>
using namespace ::std;
int findGCD(vector<int> &vec)
{
    int gcd = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        gcd = __gcd(gcd, vec[i]);
    }
    return gcd;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> input;
        int n, sum = 0, minima = INT_MAX;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
            input.push_back(temp);
        }

        sort(input.begin(), input.end());

        vector<int> copy;

        int result;
        for (int i = 0; i < input.size(); i++)
        {
            copy = input;
            copy.erase(copy.begin() + i);
            int gcd = findGCD(copy);
            result = (sum - input[i] + gcd) / gcd; //gcd = gcd of all elements except input[i]
            if (result < minima)
            {
                minima = result;
            }
        }

        cout << minima << endl;
    }
    return 0;
}