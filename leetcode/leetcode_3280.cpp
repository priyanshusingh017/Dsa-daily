#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string binarynumber (int num){
    string binary = "";
    while(num>0){
        binary = ( num%2==0 ? '0' : '1') + binary;
        num = num>>1;
    }
    return binary;
}

string convertDateToBinary(string date) {
    string year= date.substr(0,4);
    string month = date.substr(5,2);
    string Date = date.substr(8,2);
    string res= binarynumber(stoi(year)) + "-" + binarynumber(stoi(month))+ "-" + binarynumber(stoi(Date));

    return res ;
}


int main(){

    string s = "2080-02-29";
    cout<<convertDateToBinary(s);
    //cout<<binarynumber(2080)<<endl;


    return 0;
}