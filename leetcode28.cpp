#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    for(int i=0 ; i<=haystack.size(); i++){
        string st = haystack.substr(i , needle.size());
        if(st == needle){
            return i;
        }
    }
    return -1;
}


int main(){

    string s = "leetcode";
    string t = "t";
    int i = strStr(s , t);
    cout<<i<<endl;


    return 0;
}