#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int ans = 1 , min = nums[0];
    for(int i=1 ; i<nums.size(); i++){
        if(nums[i]-min > k){
            ans++;
            min = nums[i];
        }
    }
    return ans;
}

int main(){

    vector<int>nums = {3,6,1,2,5};
    cout<<partitionArray(nums , 2)<<endl; // 2
    vector<int>ans={2,2,4,5};
    cout<<partitionArray(ans , 0)<<endl; // 3

    return 0;
}