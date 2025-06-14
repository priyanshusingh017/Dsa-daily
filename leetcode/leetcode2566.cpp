#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minMaxDifference(int num) { // complexity O(n)
    string s = to_string(num);

    // Determine the first non-'9' for maxnum
    char mindigit = ' ';
    for (char c : s) {
        if (c != '9') {
            mindigit = c;
            break;
        }
    }

    // Determine the first non-'0' for minnum
    char maxdigit = ' ';
    for (char c : s) {
        if (c != '0') {
            maxdigit = c;
            break;
        }
    }

    // Create maxnum by replacing all occurrences of mindigit with '9'
    string maxnum = s;
    for (char &c : maxnum) {
        if (c == mindigit) c = '9';
    }

    // Create minnum by replacing all occurrences of maxdigit with '0'
    string minnum = s;
    for (char &c : minnum) {
        if (c == maxdigit) c = '0';
    }

    // Return the difference
    return stoi(maxnum) - stoi(minnum);
}

int main(){
    cout << minMaxDifference(11891) << endl;
    cout<< minMaxDifference(1001) << endl;
    cout<< minMaxDifference(21991) << endl;
    cout<< minMaxDifference(9999921) << endl;
    return 0;
}