// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

// Constraints
// 1≤n≤106
// Example

// Input:
// ATTCGGGA

// Output:
// 3

#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    unordered_map<char, int> seen;
    string input;
    cin >> input;
    int begin = 0, end = 0;
    int len = 0;
    int minima = INT_MIN;
    while (end < input.length())
    {
        if (input[end] == input[begin])
        {
            len++;
            end++;
        }
        else
        {
            begin = end;
            minima = max(len, minima);
            len = 0;
        }
    }
    cout << minima;
}