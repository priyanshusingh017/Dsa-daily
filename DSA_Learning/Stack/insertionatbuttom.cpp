#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &str, int x)
{
    // base case
    if (str.empty())
    {
        str.push(x);
        return;
    }

    int num = str.top();
    str.pop();

    solve(str, x);

    str.push(num);
}

stack<int> pushatbuttom(stack<int> &str, int x)
{

    solve(str, x);
    return str;
}

int main()
{

    // Test the function
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Original stack (top to bottom): 3 2 1" << endl;

    pushatbuttom(s, 4);

    cout << "After pushing 4 at bottom: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    // Should print: 3 2 1 4 (since we're printing while popping)

    return 0;

    return 0;
}