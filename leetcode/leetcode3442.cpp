#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxDifference(string s) { 
    // condition -> when there is no occurance of odd frequency and even frequency . 

    unordered_map<char , int>freq;
    for(auto c : s){
        freq[c]++;
    }
    int oddsum=0 , evensum =INT_MAX;
    bool hasodd = false , haseven=false;

    for(auto it : freq){

        if((it.second)&1){
            hasodd=true;
            oddsum = max(oddsum , it.second);
        }
        else{
            haseven = true;
            evensum = min(evensum , it.second);
        }
    }
    // edge case if no accurance of odd frequency 
    if(!hasodd){
        oddsum = 0 ; 
    }
    if(!haseven){
        evensum=0;
    }
    return oddsum-evensum;
}

int maxdifference(string s){
    unordered_map<char , int>freq;

    for(auto c : s){
        freq[c]++;
    }
    int oddsum =0 , evensum = INT_MAX;
    for(auto it : freq){
        if((it.second)&1){
            oddsum = max(oddsum , it.second);
        }
        else{
            evensum = min(evensum , it.second);
        }
    }
    return oddsum - evensum ;
}


int main(){


    string s = "aaaaabbc"; // 3
    string s1 = "abcabcab"; // 1
    string s2 = "mmsmmsy"; // -1 
    string s3 = "yzyyys" ; //-3
    cout<<maxDifference(s)<<endl;
    cout<<maxDifference(s1)<<endl;
    cout<<maxdifference(s2)<<endl;
    cout<<maxdifference(s3)<<endl;

    return 0;
}