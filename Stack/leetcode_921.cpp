#include <iostream>
#include <stack>
using namespace std;

int minAddToMakeValid(string s)
{
    stack<char> st;
    for (auto ch : s)
    {
        if (ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    int unmatched = 0;
    while (!st.empty())
    {
        unmatched++;
        st.pop();
    }
    return unmatched;
}

int main() {
    string s1 = "())";
    cout << "Minimum additions for \"" << s1 << "\": " << minAddToMakeValid(s1) << endl; // Output: 1

    string s2 = "(((";
    cout << "Minimum additions for \"" << s2 << "\": " << minAddToMakeValid(s2) << endl; // Output: 3

    string s3 = "()";
    cout << "Minimum additions for \"" << s3 << "\": " << minAddToMakeValid(s3) << endl; // Output: 0

    string s4 = "()))((";
    cout << "Minimum additions for \"" << s4 << "\": " << minAddToMakeValid(s4) << endl; // Output: 4

    return 0;
}