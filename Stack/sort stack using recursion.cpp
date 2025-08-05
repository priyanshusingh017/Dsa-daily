#include <iostream>
#include <stack>
using namespace std;

void sortedinsert(stack<int> &s, int num)
{

    // basse case
    if (s.empty() || (!s.empty() && s.top() >= num))
    {
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    sortedinsert(s, num);

    s.push(n);
}

void sortstack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    sortstack(stack);

    sortedinsert(stack, num);
}

int main()
{

    // Test the function
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(2);
    s.push(4);

    cout << "Original stack (top to bottom): 4 2 3 1" << endl;

    sortstack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}