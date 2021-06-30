#include <iostream>
using namespace ::std;

class Stack
{
private:
    int top;
    int arr[18];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 18; i++)
            arr[i] = '0';
    }
    void push(int val)
    {
        if (top != 17)
        {
            top++;
            arr[top] = val;
        }
    }
    int pop(int val)
    {
        if (top != -1)
        {
            int popValue = arr[top];
            arr[top] = '0';
            return popValue;
        }
    }
    void display()
    {
        for (int i = 0; i < 18; i++)
            cout << arr[i];
    }
};

int main()
{
    Stack s1;
    string inp;
    cout << "enter string" << endl;
    cin >> inp;
    int length = sizeof(inp) / sizeof(inp[0]);
    for (int i = 0; i < length; i++)
    {
        if (inp[i] == '(')
        {
            s1.push(1);
        }
        else
        {
            s1.push(-1);
        }
    }
    s1.display();
}