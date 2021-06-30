#include <iostream>
#include <vector>
#include <algorithm>
using namespace :: std;
int main(){
    int n,num;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    for(auto i=arr.begin();i!=arr.end();i++){
        cout<<i;
    }

}
