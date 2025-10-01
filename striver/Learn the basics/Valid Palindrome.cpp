#include <iostream>
using namespace std;

bool isPalindrome(string s)
{

    int left = 0, right = s.size() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
        {
            left++;
        }
        else if (!isalnum(s[right]))
        {
            right--;
        }
        else if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        else
        {
            left++;
            right--;
        }
    }
    return true;
}

bool palindrome1(int i, string &s)
{

    // Base Condition
    // If i exceeds half of the string means all the elements
    // are compared, we return true.
    if (i >= s.length() / 2)
        return true;

    // If the start is not equal to the end, not the palindrome.
    if (s[i] != s[s.length() - i - 1])
        return false;

    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome1(i + 1, s);
}

int main()
{

    string str = "ABCDCBA";
    bool ans = isPalindrome(str);

    if (ans == true)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}