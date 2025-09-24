#include <iostream>
using namespace std;

int reverse(int x)
{
    int rev = 0;

    while (x != 0)
    {
        int digit = x % 10;
        x = x / 10;

        // condition check
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
            return 0;

        rev = rev * 10 + digit;
    }

    return rev;
}

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    int result = reverse(x);
    cout << "Reversed integer: " << result << endl;
    return 0;
}