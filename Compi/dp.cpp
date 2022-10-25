#include<bits/stdc++.h>
using namespace::std;
int arr[100][100][100];

long long dp(int &N, int &M, vector<vector<long long>>& A, long long &K, int i, int j, long long sum){

    if (arr[i][j][sum] != -1)
        return arr[i][j][sum];

    if(i==N-1 && j==M-1){
        sum += A[i][j];
        if(sum%K == 0){
            return 1;
        }
    }

    if(i==N || j==M){
        return 0;
    }

    return dp(N,M,A,K,i+1,j,sum+A[i][j]) + dp(N,M,A,K,i,j+1,sum+A[i][j]);
}

int main(){
    memset(arr, -1, sizeof(arr));
    int N; int M; vector<vector<long long>> A; long long K;
    long long ans = dp(N,M,A,K,0,0,0);
    cout << ans;
}