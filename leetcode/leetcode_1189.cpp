#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string text) {

    string word = "balloon";
    
    unordered_map<char , int>orginal;
    unordered_map<char , int>freq;
    
    for(auto i : text){
        freq[i]++;
    }

    for(auto i : word){
        orginal[i]++;
    }

    int count = INT_MAX;
    for(const auto& it : orginal){
        char c = it.first;
        int required = it.second;
        count = min(count , freq[c]/required);
    }
    return count;
}

int main(){

    cout<<maxNumberOfBalloons("nlaebolko")<<endl;
    cout<<maxNumberOfBalloons("loonbalxballpoon")<<endl;
    cout<<maxNumberOfBalloons("leetcode")<<endl;

    return 0;
}