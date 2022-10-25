#include<iostream>
using namespace::std;

int main() {
    string s = "A";
    int start = 0;
    int end = 1;
    int ctr = 0;
    while(start < end){
        if(start == s.size()){
            break;
        }
        if(s[start] == 'A' && start != s.size()-1){
            int i = start;
            while(i <= s.size()-1){
                if(s[i] == 'B'){
                    ctr++;
                }
                i++;
            }
        }
        start++;
        end = start+1;
    }
    cout << ctr;
}