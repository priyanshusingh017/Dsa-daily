#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minimumDeletions(string word, int k) {
    unordered_map<char , int>freq;
    for(auto c : word){
        freq[c]++;
    }
    int ans = word.size();
    for(auto f1 : freq){
        int del = 0;
        for(auto f2 : freq){
            int diff = f2.second - f1.second;
            if(f1.second>f2.second){
                del += f2.second;
            }
            else if (diff>k){
                del += diff - k;
            }
        }
        ans = min(ans , del);
    }
    return ans;

}


int main(){

    string s = "aabcaba";
    cout<<minimumDeletions(s , 0);

    return 0;
}