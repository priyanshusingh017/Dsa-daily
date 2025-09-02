#include <iostream>
#include <stack>
using namespace std;

int minimumBracketReversal(string s)
{

    int n = s.size();
    if (n & 1)
    {
        return -1;
    }

    stack<char> st;
    for (char ch : s)
    {
        if (ch == '{')
        {
            st.push(ch);
        }

        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    int a = 0, b = 0; // a->opencount , b -> close count
    while (!st.empty())
    {
        if (st.top() == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        st.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;

    return ans;
}

int main()
{

    string expr1 = "}{{}}{{{"; // 3 reversals needed
    string expr2 = "{{}}}}";   // 1 reversal needed
    string expr3 = "{{}{}}";   // Already balanced
    string expr4 = "{{{";      // Invalid (odd length)

    cout << "Expression 1: " << minimumBracketReversal(expr1) << endl;
    cout << "Expression 2: " << minimumBracketReversal(expr2) << endl;
    cout << "Expression 3: " << minimumBracketReversal(expr3) << endl;
    cout << "Expression 4: " << minimumBracketReversal(expr4) << endl;

    return 0;

    return 0;
}