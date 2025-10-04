#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int space = 2 * (n - 1);

    // right angle triangle 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        // space
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }

    // reverse order
    space = 2; // reset space for reverse part
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // space 
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
        space += 2;
    }




    return 0;
}