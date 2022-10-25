#include<bits/stdc++.h>
using namespace::std;

int missingNum(vector<int> &input){
    int n = input.size();
    int total_sum = ((n+1) * (n+2)) / 2;
    int arrSum = 0;
    for(auto x:input){
        arrSum += x;
    }

    return total_sum - arrSum;
}

int main(){
    vector<int> nums{3,7,1,2,6,4,5};
    cout << missingNum(nums);
}