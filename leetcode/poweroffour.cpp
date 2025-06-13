#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Function to check if a number is a power of four in bitwise manner
bool isPowerOfFour(int n) {
    if (n <= 0) return false; // Negative numbers and zero are not powers of four
    return (n & (n - 1)) == 0 && (n - 1) % 3 == 0; // Check if n is a power of 2 and (n-1) is divisible by 3
}
int main() {
    int n = 16; // Example input
    if (isPowerOfFour(n)) {
        cout << n << " is a power of four." << endl;
    } else {
        cout << n << " is not a power of four." << endl;
    }
    return 0;
}