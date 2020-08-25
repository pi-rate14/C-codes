#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After Swapping: x =" << x << ", y=" << y;
}
