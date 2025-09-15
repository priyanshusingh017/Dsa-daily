#include <bits/stdc++.h>
using namespace std;

int myAtoi(string &s)
{

    int sign = 1, res = 0, i = 0;

    // whitespace
    while (s[i] == ' ')
    {
        i++;
    }

    // sign change
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign = -1;
            
        }
        i++;
    }

    // digit conversion
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

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int result = myAtoi(s);
    cout << "Converted integer: " << result << endl;
    return 0;
}