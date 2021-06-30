#include <bits/stdc++.h>
#include <math.h>
#include <cstdlib>
using namespace std;


int diagonalDifference(vector<int> arr, int n) {
    int s1=0,s2=0;
    //int n = sqrt(sizeof(arr)/sizeof(arr[0]));
    for(int i=0; i<= n-1; i=i+n+1){
        s1 = s1 + arr[i+n+1];
    }
    for(int i=n; i<= n-1; i=i+n-1){
        s2 = s2 + arr[i+n-1];
    }
    return (abs(s1-s2));
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n^2);
    for (int i=0; i<n^2; i++){
        cin >> arr[i];
    }
    int result = diagonalDifference(arr,n);
    cout<< result;
}
