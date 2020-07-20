#include <iostream>
using namespace std;
void even(int n)
{

    cout << "Even numbers: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        cout << i << " ";
    }
}
void odd(int n)
{

    cout << endl<<"Odd numbers: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        cout << i << " ";
    }
}
int main()
{

    int n;
    cout << "enter n: ";
    cin >>n;
    even(n);
    odd(n);
    return 0;
}
