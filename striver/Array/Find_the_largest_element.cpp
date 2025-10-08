#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Largestelement(vector<int>&nums){

    int largest = nums[0];
    for(auto num : nums){
        if(num>largest){
            largest=num;
        }
    }

    return largest;
}

int main(){

    vector<int>nums = {1,6,9,2,0,3,7};

    cout<<"Largest Element of the array : "<< Largestelement(nums);

    return 0;
}