#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    unordered_map<long, int> map;
    vector<long> vec;
    int n;
    scanf("%d", &n);
    long temp;
    while (n--)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    for (long i : vec)
    {
        map[i]++;
    }
    printf("%d", map.size());
    return 0;
}
