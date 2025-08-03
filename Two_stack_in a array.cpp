#include <iostream>
#include <stack>
using namespace std;

class twoStack
{

public:
    int *arr;
    int top1;
    int top2;
    int size;

    // top1 -> left to right
    // top2 -> right to left

    twoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = size;
        arr = new int[s];
    }

    void push1(int x)
    {
        // at least one empty space
        if (top2 - top1 > 1)
        {
            arr[top1++] = x;
        }
        else
        {
            cout << "Stack is Overflow" << endl;
        }
    }

    void push2(int x)
    {
        if (top2 - top1 > 1)
        {
            arr[top2--] = x;
        }
        else
        {
            cout << "Stack is Overflow" << endl;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top1++;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout << "Stack 1 i empty" << endl;
            return -1;
        }
    }

    int peek2()
    {
        if (top2 < size)
        {
            return arr[top2];
        }
        else
        {
            cout << "Stack 2 is empty"<<endl;;
            return -1;
        }
    }

    bool isEmpty1()
    {
        return (top1 == -1);
    }

    bool isEmpty2()
    {
        return (top2 == size);
    }
};

int main()
{
    twoStack ts(5);

    // Test Stack 1 operations
    cout << "Testing Stack 1:" << endl;
    ts.push1(10);
    ts.push1(20);
    ts.push1(30);
    cout << "Top of Stack 1: " << ts.peek1() << endl;     // Should be 30
    cout << "Popped from Stack 1: " << ts.pop1() << endl; // 30
    cout << "Popped from Stack 1: " << ts.pop1() << endl; // 20
    cout << "Is Stack 1 empty? " << (ts.isEmpty1() ? "Yes" : "No") << endl
         << endl; // No

    // Test Stack 2 operations
    cout << "Testing Stack 2:" << endl;
    ts.push2(50);
    ts.push2(40);
    ts.push2(30);
    cout << "Top of Stack 2: " << ts.peek2() << endl;     // Should be 30
    cout << "Popped from Stack 2: " << ts.pop2() << endl; // 30
    cout << "Is Stack 2 empty? " << (ts.isEmpty2() ? "Yes" : "No") << endl
         << endl; // No

    // Test overflow conditions
    cout << "Testing Overflow:" << endl;
    ts.push1(100);
    ts.push1(200); // This should cause overflow
    ts.push2(300); // This should cause overflow

    return 0;
}