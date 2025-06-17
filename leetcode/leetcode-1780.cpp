#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPowersOfThree(int n) {
    while(n>0){
        int rem = n%3;
        if(rem==2) return false;
        n /= 3;
    }
    return true;
}

int main(){
    int n = 12; // Example input
    if(checkPowersOfThree(n)) {
        cout << "Yes, the number can be expressed as a sum of powers of 3." << endl;
    } else {
        cout << "No, the number cannot be expressed as a sum of powers of 3." << endl;
    }


    return 0;
}