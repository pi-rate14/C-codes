#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 1)
        {
            return 1;
        }
        if (x == 0)
        {
            return 0;
        }
        double z = x;

        // The closed guess will be stored in the root
        double root;
        float l = 0.0001;
        // To count the number of iterations
        int count = 0;

        while (1) {
            count++;

            // Calculate more closed x
            root = 0.5 * (z + (x / z));

            // Check for closeness
            if (abs(root - z) < l)
                break;

            // Update root
            z = root;
        }

        return root;
    }
};