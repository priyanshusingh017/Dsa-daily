#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countfrequency(vector<int>&arr , int n){

    unordered_map<int,int>freq;
    for(auto i : arr){
        freq[i]++;
    }

    for(auto i : freq){
        if(i.first == n){
            return i.second;
        }
    }

    return 0;
}

int main(){

    vector<int>arr = {1,2,3,12,45,1,2,45,23,45};
    cout<<countfrequency(arr,45)<<endl;

    return 0;
}