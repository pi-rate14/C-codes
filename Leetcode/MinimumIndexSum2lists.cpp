#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        vector<string> answer;
        map<string, int> table;
        int min = INT_MAX;
        for (int i = 0; i < list1.size(); i++)
        {
            table[list1[i]] = i;
        }
        for (int i = 0; i < list2.size(); i++)
        {
            if (table.count(list2[i]))
            {
                int minsum = i + table[list2[i]];
                if (minsum < min)
                {
                    min = minsum;
                    answer.clear();
                    answer.push_back(list2[i]);
                }
                else if (minsum == min)
                {
                    answer.push_back(list2[i]);
                }
            }
        }

        return answer;
    }
};