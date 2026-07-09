#include <iostream>
using namespace std;

class StackBase
{
public:
    virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual void top() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
};

class Stack : public StackBase
{
private:
    int *arr;
    int size;
    int topIndex;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        topIndex = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int value)
    {
        if (topIndex == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        topIndex++;
        arr[topIndex] = value;
        cout << value << " Inserted Successfully." << endl;
    }

    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << arr[topIndex] << " Deleted Successfully." << endl;
        topIndex--;
    }

    void top()
    {
        if (topIndex == -1)
        {
            cout << "Stack is Empty." << endl;
            return;
        }

        cout << "Top Element : " << arr[topIndex] << endl;
    }

    void isEmpty()
    {
        if (topIndex == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Stack is Not Empty." << endl;
        }
    }

    void isFull()
    {
        if (topIndex == size - 1)
        {
            cout << "Stack is Full." << endl;
        }
        else
        {
            cout << "Stack is Not Full." << endl;
        }
    }

    void display()
    {
        if (topIndex == -1)
        {
            cout << "Stack is Empty." << endl;
            return;
        }

        for (int i = topIndex; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    int size;
    cout << "Enter Stack Size : ";
    cin >> size;

    Stack s(size);

    int choice, value;

    do
    {
        cout << "\n1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "6. Display" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value : ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.top();
            break;

        case 4:
            s.isEmpty();
            break;

        case 5:
            s.isFull();
            break;

        case 6:
            s.display();
            break;

        case 0:
            cout << "Program Ended..." << endl;
            break;

        default:
            cout << "Invalid Choice." << endl;
        }

    } while (choice != 0);

    return 0;
}