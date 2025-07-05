#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
    int a1 = num1.size();
    int b1 = num2.size();
    string result(a1+b1 , '0');
    for(int i=a1-1 ; i>=0; i--){
        for(int j=b1-1; j>=0; j--){
            int p = (num1[i]-'0')*(num2[j]-'0') + (result[i+j+1]-'0');
            result[i+j+1] = p%10 + '0';
            result[i+j] += p/10; 
        }
    }
    for(int i=0 ; i<a1+b1; i++){
        if(result[i]!='0') return result.substr(i);
    }
    return "0";
}


int main(){

    cout<<multiply("2" , "3")<<endl;


    return 0;
}