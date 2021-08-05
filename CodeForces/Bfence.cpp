#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, h;
    vector<int> planck;
    cin >> n >> h;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        planck.push_back(temp);
    }
    int sum = 0;
    for (int i = 0; i < h; i++)
    {
        sum += planck[i];
    }
    //cout << "sum : " << sum << "\n";
    int tempSum = sum, i = h, j = 0, ans = 0;
    while (i != planck.size())
    {
        // cout << "i : " << i << "\n";
        // cout << "j : " << j << "\n";
        tempSum += planck[i];
        tempSum -= planck[j];
        //cout << "tempsum : " << tempSum << "\n";
        i++;
        j++;
        //sum = min(tempSum, sum);
        if (tempSum < sum)
        {
            ans = j + 1;
            sum = tempSum;
        }
        // cout << "answer : " << sum << "\n";
        // cout << "answerIndex : " << ans << "\n";
    }
    cout << ans;
    return 0;
}