#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bitscount(int n){
    int count=0;
    while(n>0){
        count += (n&1); // if the lastbit is setbit the its gives 1
        n = n>>1; // divide by 2 .
    }
    return count;
}

int hammingDistance(int x, int y) {

    int num = x^y;
    return bitscount(num);
}

int main(){

    cout<<hammingDistance(1,4);

    return 0;
}