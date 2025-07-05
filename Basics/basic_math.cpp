#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string addstrings(string s , string r){
    int n = s.size()-1;
    int m = r.size()-1;
    string res;
    int carry = 0;
    while(n>=0 || m>=0 || carry>0){
        int digit1 = n>=0 ? s[n--]-'0' : 0;
        int digit2 = m>=0 ? r[m--]-'0' : 0;
        carry += digit1 + digit2 ;
        res += (carry%10) + '0'; 
        carry = carry/10;
    }
    reverse(res.begin() , res.end());
    return res;
}

string addbinary(string num1 , string num2){
    int n = num1.size()-1;
    int m = num2.size()-1;
    int carry =0;
    string res;
    while(n>=0 || m>=0 || carry>0){
        int digit1 = n>=0 ? num1[n--] -'0' : 0;
        int digit2 = m>=0 ? num2[m--] - '0' : 0;
        carry += digit1 + digit2;
        res += (carry%2)+'0';
        carry /= 2;
    }
    reverse(res.begin() , res.end());
    return res;
}

string multiply_strings(string nums1 , string nums2){
    int n = nums1.size();
    int m = nums2.size();
    string a (n+m , '0');
    for(int i = n-1 ; i>=0; i--){
        for(int j = m-1 ; j>=0; j--){
            int p = (nums1[i]-'0') * (nums2[j]-'0') + (a[i+j+1]-'0');
            a[i+j+1] = (p%10)+'0';
            a[i+j] += p/10;
        }
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]!= '0' ) return a.substr(i);
    }
    return "0";
}

int main(){

    cout<<addstrings("11" , "123")<<endl; // 11 + 123 = 134 
    cout<<addbinary("110" , "100")<<endl; //1010 ( 110 + 100 = 1010)
    cout<<multiply_strings("3" , "5")<<endl; // 15;

    return 0;
}