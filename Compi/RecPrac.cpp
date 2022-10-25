#include<bits/stdc++.h>
using namespace::std;

int countSub(int idx, vector<int> arr, int target, int sum) {
    if(idx == arr.size()){
        if(sum == target){
            return 1;
        } else {
            return 0;
        }
    }
        
    sum += arr[idx];
    int pick = countSub(idx+1, arr, target, sum);
    sum -= arr[idx];
    int notPick = countSub(idx+1, arr, target, sum);
    return pick+notPick;
}

int main(){
    vector<int> arr{1,1,2,1};
    cout << countSub(0, arr, 2, 0);
}