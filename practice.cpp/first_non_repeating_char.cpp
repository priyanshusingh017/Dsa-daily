#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstnonrepeating(string s){
    unordered_map<char,int>freq;
    for(auto c :s){
        freq[c]++;
    }
    for(int i=0; i<s.size(); i++){
        if(freq[s[i]]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    string s = "leetcode";

    cout<<firstnonrepeating(s);

    return 0;
}