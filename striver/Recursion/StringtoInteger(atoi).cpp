#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Approach 1 - Recursive

int solve(string &s, int i, int res, int sign)
{

    // base case
    if (i >= s.size() || !isdigit(s[i]))
    {
        return res * sign;
    }

    if (res > INT_MAX / 10 || (res == INT_MAX / 10 && (s[i] - '0' > 7)))
    {
        return sign == 1 ? INT_MAX : INT_MIN;
    }

    res = res * 10 + (s[i] - '0');

    return solve(s, i + 1, res, sign);
}

int myAtoi(string s)
{
    int sign = 1, res = 0, i = 0;

    // whitespace
    while (i < s.size() && s[i] == ' ')
    {
        i++;
    }

    // handle sign
    if (i < s.size() && s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    return solve(s, i, res, sign);
}

// Approach 2 - Iterative

int myAtoi1(string s)
{
    int sign = 1, res = 0, i = 0;

    // whitespace
    while (s[i] == ' ')
    {
        i++;
    }

    // handle sign
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    // handle the digit case

    while (s[i] >= '0' && s[i] <= '9')
    {

        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && (s[i] - '0' > 7)))
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }

        res = res * 10 + (s[i] - '0');
        i++;
    }

    return res * sign;
}

int main()
{
    vector<string> testCases = {
        "42",
        "   -42",
        "4193 with words",
        "words and 987",
        "-91283472332",
        "+1",
        "2147483648",
        "-2147483649",
        "0032",
        "",
        "   +0 123"
    };

    cout << "Testing Recursive Approach:" << endl;
    for (const auto& s : testCases) {
        cout << "Input: \"" << s << "\" Output: " << myAtoi(s) << endl;
    }

    cout << "\nTesting Iterative Approach:" << endl;
    for (const auto& s : testCases) {
        cout << "Input: \"" << s << "\" Output: " << myAtoi1(s) << endl;
    }

    return 0;
}