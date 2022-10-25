#include<bits/stdc++.h>
using namespace::std;

bool sum3(vector<int> &arr, int target) {
    int start = 0;
    int end = arr.size()-1;
    sort(arr.begin(), arr.end()); // 1,2,3,4,5,7,8
    int sum = 0;

    for(int i=0; i<arr.size(); i++){
        int temp = target-arr[i];
        start = i+1;
        while(start < end) {
            sum = arr[start] + arr[end];
            if(sum == temp) break;
            if(sum > temp) --end;
            if(sum < temp) ++start;
        }
        if(arr[i]+sum == target) return true;
    }

    return false;
    
}

int main() {
    vector<int> arr{3,7,1,2,8,4,5};
    bool ans = sum3(arr, 58);
    cout << ans;
}

