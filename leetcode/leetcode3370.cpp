#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// function to next smallest number to all set bits in binary representation of n
int smallestNumber(int n){
    int k=1;
    while(true){
        int x = (1<<k)-1; // (1<<k) is 2^k, so (1<<k)-1 gives us a number with k bits set to 1
        if(x>=n){
            return x;
        }
        k++;
        if(k>32){ // to avoid infinite loop in case of large n
            return -1; // return -1 if no such number exists
        }
    }
    return -1; // this line will never be reached, but it's good practice to have a return statement
}




int main(){


    int n = 5 ; // 7 -> 111
    cout << smallestNumber(n) << endl;

    return 0;
}