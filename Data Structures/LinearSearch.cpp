#include <iostream>
using namespace ::std;

void linearSearch(int arr[], int num)
{
    int temp = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            cout << "element at location: " << i << "\n";
            temp = 0;
        }
    }
    if (temp == -1)
    {
        cout << "no element found.";
    }
}

int main()
{
    int arr[5] = {1, 22, 34, 5, 7};
    cout << "enter element to search\n";
    int num;
    cin >> num;
    linearSearch(arr, num);
    return 0;
}