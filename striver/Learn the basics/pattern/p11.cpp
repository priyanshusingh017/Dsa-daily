#include<iostream>
using namespace std;

/*
Pattern print 11 - 
 1
 01
 101
 0101
 10101
*/

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        int num = (i % 2 == 0) ? 0 : 1;
        for(int j = 1; j <= i; j++) {
            cout << num;
            num = 1 - num; // alternate between 1 and 0
        }
        cout << endl;
    }
    return 0;
}
