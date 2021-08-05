#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums{2, 2, 3, 1};
    int n = nums.size(), ctr = 0, res = 0;
    if (n == 1)
        return n;
    if (n == 2)
        return max(nums[0], nums[1]);
    sort(nums.begin(), nums.end());
    stack<int> st;
    for (int i : nums)
    {
        st.push(i);
    }
    int a = st.top();
    while (st.top() == a)
    {
        st.pop();
    }
    int b = st.top();
    while (st.top() == b)
    {
        st.pop();
    }
    cout << st.top();
    return 0;
}