#include <iostream>
#include <stack>
using namespace std;

int minSwaps(string s)
{
    int n = s.size();
    // base case
    if (n & 1)
    {
        return -1;
    }
    stack<char> st;
    for (auto ch : s)
    {
        // open bracket
        if (ch == '[')
        {
            st.push(ch);
        }
        else
        {
            // close bracket
            if (!st.empty() && st.top() == '[')
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
    return (unmatched / 2 + 1) / 2;
}

int main()
{
    string s1 = "[]][][";
    cout << "Minimum swaps for \"" << s1 << "\": " << minSwaps(s1) << endl; // Output: 1

    string s2 = "]]][[[";
    cout << "Minimum swaps for \"" << s2 << "\": " << minSwaps(s2) << endl; // Output: 2

    string s3 = "[]";
    cout << "Minimum swaps for \"" << s3 << "\": " << minSwaps(s3) << endl; // Output: 0

    string s4 = "][";
    cout << "Minimum swaps for \"" << s4 << "\": " << minSwaps(s4) << endl; // Output: 1

    return 0;

    return 0;
}