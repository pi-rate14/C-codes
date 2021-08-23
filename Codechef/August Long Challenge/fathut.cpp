#include<bits/stdc++.h>
using namespace::std;

void solve() {
    int n;
    cin >> n;
    int* arr = 0;
    arr = new int[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0;i < n;i++) {
        sum += arr[i];
    }
    if (sum == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        sort(arr, arr + n);
        int sum = 0;
        int count = 0;
        for (int i = 0;i < n;i++) {
            sum += arr[i];
            if (sum == 0)
                count++;
        }
        if (count == n) {
            for (int i = 0;i < n;++i) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else {
            for (int i = 0;i < n;++i) {
                cout << arr[n - 1] << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}