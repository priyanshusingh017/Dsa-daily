#include<iostream>
#include<bits/stdc++.h>

using namespace std;
vector<string> findSubstrings(string &s) {

    // to store all substrings
    vector<string> res;

    for(int i = 0; i < s.length(); i++) {
        for(int j = 1; j <= s.length()-i; j++) {
            
            // substr function takes starting index
            // and length as parameters
            res.push_back(s.substr(i, j)); // s.substr(pos , len) 
        }
    }

    return res;
}


int main(){


    string s = "abc";
    vector<string> res = findSubstrings(s);
    for(auto i:res) {
        cout<< i <<" ";
    }

    return 0;
}