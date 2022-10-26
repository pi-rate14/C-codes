#include <bits/stdc++.h>
using namespace ::std;

typedef list<pair<int, int>>::iterator listIter;

class LRUCache
{
    int capacity;
    unordered_map<int, listIter> map;
    list<pair<int, int>> qList;

public:
    LRUCache(int _capacity)
    {
        capacity = _capacity;
    }

    int get(int key)
    {
        auto found = map.find(key);
        if (found == map.end())
        {
            return -1;
        }

        qList.splice(qList.begin(), qList, found->second);

        return found->second->second;
    }

    void set(int key, int value)
    {
        auto found = map.find(key);
        if (found != map.end())
        {
            qList.splice(qList.begin(), qList, found->second);
            found->second->second = value;
            return;
        }

        if (map.size() == capacity)
        {
            int delKey = qList.back().first;
            qList.pop_back();
            map.erase(delKey);
        }

        qList.emplace_front(key, value);
        map[key] = qList.begin();
    }
};
