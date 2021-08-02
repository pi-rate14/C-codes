#include <bits/stdc++.h>
using namespace ::std;
#define ll long long int

int main()
{
    int t,winner=0,lead=0,winLead=0;
    cin >> t;
    while (t--)
    {
        int p1,p2;
        cin >> p1 >> p2;
        lead = abs(p1-p2);
        winLead = max(lead,winLead);
    }
    return 0;
}