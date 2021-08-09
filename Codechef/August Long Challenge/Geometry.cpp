/*

new area = scale*scale*old area
scale = new side / old side


*/

#include <bits/stdc++.h>
using namespace ::std;
#define ll long double

double polygonArea(double X[], double Y[], int n)
{
    // Initialize area
    double area = 0.00;

    // Calculate value of shoelace formula
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;  // j is previous vertex to i
    }

    // Return absolute value
    return abs(area / 2.00);
}

void solve() {
    ll n, q, temp = 0;
    cin >> n >> q;
    vector<ll> distance;
    vector<ll> x, y;
    for (int i = 0;i < n;i++) {
        cin >> (temp);
        x.push_back(temp);
        cin >> temp;
        y.push_back(temp);
    }
    ll v, t;
    for (int i = 0;i < q;i++) {
        cin >> v;
        cin >> t;
        distance.push_back(v * t);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}