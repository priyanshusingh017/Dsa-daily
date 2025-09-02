#include <iostream>
#include <stack>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // push operation
    void push(int x)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack is overflow";
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty()
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
};

int main()
{

    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(24);

    cout << "peek of th Stack is : " << st.peek() << endl;

    st.pop();

    cout << "peek of th Stack is : " << st.peek() << endl;

    st.pop();

    cout << "peek of th Stack is : " << st.peek() << endl;

    st.pop();

    cout << "peek of th Stack is : " << st.peek() << endl;

    if(st.isempty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}