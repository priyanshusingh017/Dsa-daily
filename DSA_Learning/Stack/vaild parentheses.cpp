#include <iostream>
#include <stack>
using namespace std;

bool isvalidparenthesis(string expression)
{

    stack<char> s;
    for (int i = 0; i < expression.size(); i++)
    {

        char ch = expression[i];

        // if oppening bracket , stack push
        // if close bracket , stacktop is check and pop

        if (ch == '{' || ch == '(' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            // for closing bracket
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == '}' && top == '{') ||
                    (ch == ')' && top == '(') ||
                    (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}

int main()
{

    // Test cases
    cout << isvalidparenthesis("(){}[]") << endl; // Should output 1 (true)
    cout << isvalidparenthesis("({[]})") << endl; // Should output 1 (true)
    cout << isvalidparenthesis("(]") << endl;     // Should output 0 (false)
    cout << isvalidparenthesis("({)") << endl;    // Should output 0 (false)
    cout << isvalidparenthesis("}{") << endl;     // Should output 0 (false)
    return 0;

    return 0;
}
