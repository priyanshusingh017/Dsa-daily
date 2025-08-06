#include <iostream>
#include <stack>
using namespace std;

string minRemoveToMakeValid(string s)
{
    string res = "";
    stack<int> st;
    for (auto ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
        { // lower-case check [ a to z]
            res += ch;
        }
        else if (ch == '(')
        {                        // push the '(' in the string.
            st.push(res.size()); // push the 0-index
            res += ch;
        }
        else if (ch == ')')
        {
            if (!st.empty())
            {
                res += ch;
                st.pop();
            }
        }
    }

    while (!st.empty())
    {                           // tackle the opening bracket
        res.erase(st.top(), 1); // erase the index value with position
        st.pop();               // pop the stack value
    }

    return res;
}

int main()
{
    string s1 = "lee(t(c)o)de)";
    cout << "Valid string for \"" << s1 << "\": " << minRemoveToMakeValid(s1) << endl; // Output: "lee(t(c)o)de"

    string s2 = "a)b(c)d";
    cout << "Valid string for \"" << s2 << "\": " << minRemoveToMakeValid(s2) << endl; // Output: "ab(c)d"

    string s3 = "))((";
    cout << "Valid string for \"" << s3 << "\": " << minRemoveToMakeValid(s3) << endl; // Output: ""

    return 0;
}