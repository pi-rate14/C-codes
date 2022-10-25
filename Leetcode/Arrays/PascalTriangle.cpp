#include<bits/stdc++.h>
using namespace::std;

vector<string> ans;

void func(int i, string s, string temp) {
    if(i == s.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(s[i]);
    func(i+1, s, temp);
    temp.pop_back();
    func(i+1, s, temp);
}

int main() {
    string s = "abc";
    func(0, s, "");
    for(auto x:ans){
        cout << x << " ";
    }

}