#include<bits/stdc++.h>
using namespace::std;

int main(){
    vector<int> heights{10, 30, 40, 50, 20};
    int n = 5;
    int k = 3;
    vector<int> dp{n,0};
    dp[0] = 0;
    int minSteps;
    for(int i=1; i<n; i++){
        minSteps = INT_MAX;
        for(int j=1; j<k; j++){
            if(i-j >= 0){
                int jumpEnergy = dp[i] + abs(heights[i] - heights[i-j]);
                minSteps = min(minSteps, jumpEnergy);
            }
        }

        dp[i] = minSteps;
    }

    cout << dp[n-1];
}