#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> arr;
        for (int i : nums1) {
            arr.push_back((double)i);
        }
        for (int i : nums2) {
            arr.push_back((double)i);
        }

        sort(arr.begin(), arr.end());

        double med = 0.0000;

        int n = arr.size();
        if (n % 2 == 0) {
            cout << arr[n / 2] << " " << arr[(n / 2) - 1] << endl;
            med = (arr[n / 2] + arr[(n / 2) - 1]) / 2;
        }
        else {
            med = arr[(n / 2)];
        }
        return med;
    }
};