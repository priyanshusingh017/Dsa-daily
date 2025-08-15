#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int secondlargestelement(vector<int>nums){
    sort(nums.begin(), nums.end() , greater<int>());
    int largest = nums[0];
    for(auto x : nums){
        if(x<largest){
            return x;
        }
    }

    return -1;
}

int main(){

    vector<int>nums={2,5,1,7,7};

    cout<<secondlargestelement(nums);

    return 0;
}