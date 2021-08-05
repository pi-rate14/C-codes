#include <iostream>
#include <vector>
#include <algorithm>
using namespace :: std;

long long maxPairWiseProduct(vector<int> &arr){
    int n = arr.size();
    long long m1 = -1, m2=-1;
    int  m1i=0;
    for(int i=0;i<n;i++){
        if(arr[i]>m1){
            m1 = arr[i];
            m1i=i;
        }
    }
    //cout << m1i<<endl;
    for(int j=0;j<n;j++){
        if(arr[j]>m2&&j!=m1i){
            m2=arr[j];
        }
    }
    //cout<<m1<<" "<<m2;
    return(m1*m2);
}

int main(){
    int n,num;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long result = maxPairWiseProduct(arr);
    cout << result;
    return 0;
}
