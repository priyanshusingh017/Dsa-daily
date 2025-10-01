#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    // Negative numbers are not palindrome
    if (x < 0) return false;

    long rev = 0;
    long n1 = x;

    while (n1 > 0)
    {
        int digit = n1 % 10;
        if (rev > INT_MAX / 10)
            return false;
        rev = rev * 10 + digit;
        n1 = n1 / 10;
    }

    return rev == x;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}