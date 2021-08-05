#include <iostream>
#include <string>

using namespace ::std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1; //stack is empty
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0; //empties the array
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "stack overflow";
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "stack underflow";
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0; //popping the value
            top--;
            return popValue; //returns the popped value
        }
    }

    int count()
    {
        return (top + 1);
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "stack underflow";
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "value changed at the position " << pos << endl;
    }

    void display()
    {
        cout << "all values in the stack are" << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    int option, position, value;
    do
    {
        cout << "0. exit\n1. Push\n2. Pop\n3. Peek\n4. Count\n5. Change\n6. Display" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "enter value to push";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "popped value: " << s1.pop() << endl;
            break;
        case 3:
            cout << "enter position to peek: " << endl;
            cin >> position;
            cout << s1.peek(position) << endl;
            break;
        case 4:
            cout << "count is " << s1.count() << endl;
        case 5:
            cout << "enter position ";
            cin >> position;
            cout << "enter value ";
            cin >> value;
            s1.change(position, value);
            break;
        case 6:
            cout << "display: " << endl;
            s1.display();
            break;
        default:
            cout << "enter proper option number " << endl;
        }
    } while (option != 0);
    return 0;
}