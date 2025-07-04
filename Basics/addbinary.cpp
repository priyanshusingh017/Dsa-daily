#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Function to add two binary strings
string addBinary(string a, string b){
    int a1 = a.size()-1;
    int b1 = b.size()-1;
    string result;
    for(int carry=0; a1>=0 || b1>=0 ||carry; a1-- , b1 --){
        carry += (a1>=0 ? a[a1]-'0' : 0 ) + (b1>=0 ? b[b1] -'0' : 0);
        result.push_back((carry%2)+'0');
        carry = carry/2;
    }
    reverse(result.begin() , result.end());
    return result;

}

int main(){
    string a = "101";
    string b = "110";
    cout << addBinary(a, b) << endl; // Output: 1011
    return 0; 
}
