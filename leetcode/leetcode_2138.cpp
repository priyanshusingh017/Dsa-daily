#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> divideString(string s, int k, char fill) {
    vector<string>res;
    res.reserve(s.size()/k);
    for(int i=0 ; i<s.size(); i=i+k){
        string group ="" ;
        for(int j=0 ; j<k; j++){
            int n = i+j;
            if(n<s.size()){
                group += s[n];
            }
            else{
                group += fill;
            }
        }
        res.push_back(group);
    }
    return res;
}

int main(){

    string s = "abcdefghij";
    vector<string>num = divideString(s , 4 , 'x');
    for(auto c : num){
        cout<<c<<" ";
    }



    return 0;
}