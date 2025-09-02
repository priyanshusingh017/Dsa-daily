#include <iostream>
#include <stack>
using namespace std;

bool findRedundantBrackets(string &s)
{

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool redundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || ch == '/')
                    {
                        redundant = false;
                    }
                    st.pop();
                }
                if (redundant)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{

    string expr1 = "((a+b))";     // Redundant
    string expr2 = "(a+(b)/c)";   // Redundant
    string expr4 = "(a+b)";         // Not redundant

    cout << "Expression 1: " << (findRedundantBrackets(expr1) ? "Redundant" : "Not redundant") << endl;
    cout << "Expression 2: " << (findRedundantBrackets(expr2) ? "Redundant" : "Not redundant") << endl;
    cout << "Expression 4: " << (findRedundantBrackets(expr4) ? "Redundant" : "Not redundant") << endl;

    return 0;

    return 0;
}