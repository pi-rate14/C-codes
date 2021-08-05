#include <iostream>
using namespace ::std;

void Maximize(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (a[i] < a[i + 1])
        {
        }
    }
}
int main()
{
    int a[7] = {100, 180, 260, 310, 40, 535, 695};
    int length = sizeof(a) / sizeof(a[0]);
    Maximize(a, length);
}