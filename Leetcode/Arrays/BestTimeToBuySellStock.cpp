#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    vector<int> stocks;
    int n, max = 0, min = 10000, maxIndex, minIndex, profit = 0;
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        stocks.push_back(n);
    }
    min = *min_element(stocks.begin(), stocks.end() - 1);

    max = *max_element(min_element(stocks.begin(), stocks.end() - 1), stocks.end());

    cout << "max: " << max << " min: " << min << " maxIndex: " << maxIndex << " minIndex: " << minIndex << endl;
    profit = max - min;
    cout << profit;
    return 0;
}