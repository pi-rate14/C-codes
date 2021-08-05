#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        if (fruits.size() == 0)
            return 0;

        unordered_map<int, int> table;
        int begin = 0, end = 0, len = 0, counter = 0;

        while (end < fruits.size())
        {
            int current = fruits[end];

            table[current]++;
            if (table[current] == 1)
                counter++;

            end++;

            while (counter > 2)
            {
                int startint = fruits[begin];

                if (table.count(startint) == 1)
                {
                    table[startint]--;
                    if (table[startint] == 0)
                        counter--;
                }

                begin++;
            }

            len = max(len, end - begin);
        }

        return len;
    }
};