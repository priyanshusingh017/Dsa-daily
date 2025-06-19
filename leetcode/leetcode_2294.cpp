#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
        
}

int main(){

    vector<int>nums = {3,6,1,2,5};
    cout<<partitionArray(nums , 2)<<endl;


    return 0;
}