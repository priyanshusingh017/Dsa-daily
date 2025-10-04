#include<iostream>
using namespace std;

int main() {
    int n = 3; // size of the pattern (number of rows and columns)
    int totalRows = 2 * n;

    for (int i = 0; i < totalRows; ++i) {
        int stars = n - (i < n ? i : totalRows - i - 1);
        int spaces = 2 * (i < n ? i : totalRows - i - 1);

        // Print left stars
        for (int j = 0; j < stars; ++j)
            cout << "*";
        // Print spaces
        for (int j = 0; j < spaces; ++j)
            cout << " ";
        // Print right stars
        for (int j = 0; j < stars; ++j)
            cout << "*";
        cout << endl;
    }

    return 0;
}