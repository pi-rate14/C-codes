#include <bits/stdc++.h>
using namespace ::std;
void decimalToBinary(unsigned int dec, vector<int> &oneArray)
{
    int binaryNum[32], ctr = 0;
    int i = 0;
    while (dec > 0)
    {
        binaryNum[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        if (binaryNum[j] == 1)
        {
            oneArray[j]++;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<unsigned int> input;
        vector<int> oneArray(32);
        unsigned int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            input.push_back(temp);
            decimalToBinary(temp, oneArray);
        }
        int res = 0;
        for (int i = 0; i < oneArray.size(); i++)
        {
            res += ceil(oneArray[i] / (float)(k));
        }
        cout << res << endl;
    }
    return 0;
}