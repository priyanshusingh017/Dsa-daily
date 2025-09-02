#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string baseNeg2(int n){
    string res = "";
    while(n){
        res = to_string(n&1) + res;
        n = -(n>>1);
    }
    return res == "" ? "0" : res;
}

int main(){

    int n = 2;
    cout<<baseNeg2(2);

    return 0;
}