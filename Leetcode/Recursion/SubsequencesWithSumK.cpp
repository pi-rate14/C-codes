#include <bits/stdc++.h>
using namespace ::std;

vector<vector<int>> ans;

void findSubWithSumK(int i, vector<int> &arr, vector<int> &temp, int tempSum, int sum)
{
    if (i == arr.size())
    {
        if (tempSum == sum)
        {
            ans.push_back(temp);
        }
        return;
    }

    temp.push_back(arr[i]);
    tempSum += arr[i];
    findSubWithSumK(i + 1, arr, temp, tempSum, sum);
    tempSum -= arr[i];
    temp.pop_back();
    findSubWithSumK(i + 1, arr, temp, tempSum, sum);
}

int main()
{
    vector<int> arr{1, 2, 1};
    int k = 2;
    vector<int> temp;
    findSubWithSumK(0, arr, temp, 0, k);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}