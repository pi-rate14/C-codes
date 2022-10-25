#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w = "rlrliy";
    string x = "rrrlihipqhl" ;
    string y = "ryplihypp";
    string z = "lytlis";

    int wFreq[26]= {0};
    int xFreq[26]= {0};
    int yFreq[26]= {0};
    int zFreq[26]= {0};

    for(int i=0;i<w.length();i++){
        wFreq[w[i]-'a']++;
    }
    for(int i=0;i<x.length();i++){
        xFreq[x[i]-'a']++;
    }
    for(int i=0;i<y.length();i++){
        yFreq[y[i]-'a']++;
    }
    for(int i=0;i<z.length();i++){
        zFreq[z[i]-'a']++;
    }
    int longestPrefix=0;
    for(int i=0;i<26;i++){
        int count=wFreq[i];
        count=min(count,xFreq[i]);
        count=min(count,yFreq[i]);
        count=min(count,zFreq[i]);

        if(count==0) continue;

        wFreq[i]-=count;
        xFreq[i]-=count;
        yFreq[i]-=count;
        zFreq[i]-=count;
        longestPrefix+=count;
    }
    //now you need to find theleftover string using the same freq arrays
    int leftOverLen=0;
    for(int i=0;i<26;i++){
        int ma=wFreq[i];
        ma=max(ma,xFreq[i]);
        ma=max(ma,yFreq[i]);
        ma=max(ma,zFreq[i]);
        leftOverLen+=ma; 
    }

    cout<< longestPrefix+leftOverLen;


    
    return 0;
}