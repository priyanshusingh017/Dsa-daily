#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumDifference(vector<int>& nums) { // complexity -> O(n) , space -> O(1)
    if(nums.size() < 2) return -1; // If there are less than 2 elements, return -1
    int n = nums.size();
    int maxdiff = -1;
    int i = INT_MAX;
    for(int j=0; j<n; j++){
        if(nums[j]<i){
            i = nums[j];
        }
        else{
            maxdiff = max(maxdiff , nums[j]-i);
        }
    }
    return maxdiff;
}


int main(){
    vector<int>nums = {7,1,5,4};
    cout << maximumDifference(nums) << endl; // Output: 4
    return 0;
}