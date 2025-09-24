#include<iostream>
#include <cmath>
using namespace std;

bool armstrongnumber(int n) {
    int size = to_string(n).size();
    int number = n;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, size);
        number = number / 10;
    }

    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (armstrongnumber(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}