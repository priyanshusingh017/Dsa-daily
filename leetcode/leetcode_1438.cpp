#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums, int limit) { // baki hai 
    int l =0 , r =0 , maxlength = 0 ;
    while(r<nums.size()){
        int num = abs(nums[l]-nums[r]);
        if(num<=limit){
            maxlength =  max(maxlength ,r-l+1);
            r++;
        }
        else{ 
            l++;
        }

    }
    return maxlength;
}


int main(){

    vector<int>nums = {8,2,4,7};
    cout<<longestSubarray(nums , 4)<<endl; // 2
    vector<int>nums1 = {10,1,2,4,7,2};
    cout<<longestSubarray(nums1 , 5)<<endl; // 4
    vector<int>nums2 = {4,2,2,2,4,4,2,2};
    cout<<longestSubarray(nums2 , 0)<<endl; // 3
    vector<int>nums3={1,2,6,3,7,6,3,2,1};
    cout<<longestSubarray(nums3 , 4)<<endl ; // 5
    
    return 0;
}