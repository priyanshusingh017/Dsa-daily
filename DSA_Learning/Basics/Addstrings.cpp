#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
    int n = num1.size()-1;
    int m = num2.size()-1;
    string ans;
    int carry = 0;
    while(n>=0 || m>=0 || carry>0){
        int digit1 = n>=0 ? num1[n--]-'0' : 0;
        int digit2 = m>=0 ? num2[m--]-'0' : 0;
        carry += digit1 + digit2 ;
        ans += (carry%10) + '0';
        carry = carry/10;
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){

    cout<<addStrings("11" , "123")<<endl;

    return 0;
}