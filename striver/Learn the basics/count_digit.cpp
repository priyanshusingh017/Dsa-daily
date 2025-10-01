#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// For any positive integer n, log10(n) gives the exponent needed to reach n from 10 . 
//Adding 1 and taking the integer part gives the digit count.

int countNumber(int n){
    if (n == 0) return 1;
    n = abs(n);
    int count = log10(n) + 1;
    return count;
}

int main(){

    int n = 123456;

    cout<<" Count of digit is : " << countNumber(n)<<endl;

    return 0;
}