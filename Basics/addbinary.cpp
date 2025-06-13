#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Function to add two binary strings
string addBinary(string a, string b){
    int a1 = stoi(a);
    int b1 = stoi(b);
    int sum = a1 + b1;
    string result = "";
    
    return result;
}

int main(){
    string a = "101";
    string b = "110";
    cout << addBinary(a, b) << endl; // Output: 1011
    return 0; 
}
