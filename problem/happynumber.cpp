#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool happynumber(int n){
    unordered_set<int>seen;
    while(n!=1 && seen.find(n)==seen.end()){
        seen.insert(n);
        int sum =0;
        while(n>0){
            int digit = n%10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    return n==1;
}


int main(){

    cout<<"enter the number to check for happy number - "<<endl;
    int n;
    cin>>n;
    if(happynumber(n)){
        cout<<"is happy number."<<endl;
    }
    else{
        cout<<"not happy number."<<endl;
    }

    return 0;
}