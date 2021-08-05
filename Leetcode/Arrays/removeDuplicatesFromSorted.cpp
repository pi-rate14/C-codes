// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

// Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

// Return k after placing the final result in the first k slots of nums.

// Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

#include <iostream>
#include <vector>
using namespace ::std;
int main()
{
    vector<int> input;
    int n[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> n[i];
    }
    int left = 1, right = 0;
    while (right < 7)
    {
        if (n[right] != n[right + 1])
        {
            n[left] = n[right + 1];
            left++;
        }
        right++;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << n[i];
    }
    return 0;
}