#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums{0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    int k = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            vector<int>::iterator it = nums.begin();
            it += i;
            cout << "erasing " << nums[i] << "\n";
            nums.erase(it);
            k++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}