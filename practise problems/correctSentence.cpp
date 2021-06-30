#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	string small = "abcdefghijklm";
	string big = "NOPQRSTUVWXYZ";
	vector<string> Strings;
	while(t--){

	    int k;
	    string s1;
	    cin >> k;
	    int result=0;
	    while(k--){
            int smallFlag = 0;
            int bigFlag = 0;

	        cin >> s1;
	        for(auto i = 0; i!=s1.length(); ++i){
                if (small.find(s1[i])!=string::npos)
                 {
                    smallFlag++;
                 }if (big.find(s1[i])!=string::npos)
                 {
                   bigFlag++;
                 }
	        }
	        if((smallFlag==0 && bigFlag != 0)||(bigFlag==0&&smallFlag!=0)){
                result += 1;
            } else{
                result -=10000;
            }


	    }
	    if(result<0){
                Strings.push_back("NO");
            } else{
                Strings.push_back("YES");
            }
	}
	for (auto i = Strings.begin(); i != Strings.end(); ++i)
        cout << *i << "\n";
	return 0;
}
