#include <iostream>
#include <stack>
using namespace std;

void insertionatbuttom(stack<int> &stack, int x)
{

    // base case
    if (stack.empty())
    {
        stack.push(x);
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    insertionatbuttom(stack, x);

    stack.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertionatbuttom(stack, num);
}

int main()
{

    // Test the function
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Original stack (top to bottom): 3 2 1" << endl;

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }


    return 0;

}