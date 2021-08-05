#include<iostream>
#include<vector>
using namespace::std;
int main(){
    int t;
    cin >>t;
    vector<int> result;
    while(t--){
        long n;
        cin >>n;
        if(n==1){
            result.push_back(1);
        }
        else{
            result.push_back((n/2)+1);
        }
    }
     for (auto i = result.begin(); i != result.end(); ++i)
        cout << *i << "\n";
    return 0;
}
