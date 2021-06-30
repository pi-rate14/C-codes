// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

// Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

// Input: prices = [7,1,5,3,6,4]
// diff = [-6,4,-2,3,-2]

#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    vector<int> prices;
    int size = 5, n, sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        prices.push_back(n);
    }
    //vector<int> diff;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        //diff.push_back(prices[i + 1] - prices[i]);
        if (prices[i + 1] - prices[i] > 0)
        {
            sum = sum + prices[i + 1] - prices[i];
        }
    }
    cout << sum;
    return 0;
}