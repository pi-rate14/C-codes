#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

template <typename T>
void findDuplicates(std::vector<T> & vecOfElements, std::map<T, int> & countMap)
{
    // Iterate over the vector and store the frequency of each element in map
    for (auto & elem : vecOfElements)
    {
        auto result = countMap.insert(std::pair<int, int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }
    // Remove the elements from Map which has 1 frequency count
    for (auto it = countMap.begin() ; it != countMap.end() ;)
    {
        if (it->second == 1)
            it = countMap.erase(it);
        else
            it++;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        map<int, int> duplicateElements;
        int n,m,k,flag=0;
        vector<int> L;
        vector<int> result;
        cin >> n >> m >> k;
        while(k--){
            int l;
            cin >> l;
            L.push_back(l);
        }
        findDuplicates(L, duplicateElements);
        for (auto & elem : duplicateElements){
                if(elem.first <= n){
                    flag++;
                    result.push_back(elem.first);
                }
            }
        cout << flag<< " ";
        for (auto i = result.begin(); i != result.end(); ++i)
        cout << *i << " ";
    }



    return 0;
}

