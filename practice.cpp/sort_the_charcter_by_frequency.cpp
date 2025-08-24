#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortthecharchter(string s){
    unordered_map<char,int>freq;
    for(auto c : s){
        freq[c]++;
    }
    sort(s.begin() , s.end(),[&](char a , char b){
        if(freq[a]==freq[b]) return a<b;
        return freq[a]>freq[b];
    });

    cout<<s;
}

int main(){

    string s;
    cin>>s;

    sortthecharchter(s);

    return 0;
}