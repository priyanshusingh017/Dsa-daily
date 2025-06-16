#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumDifference(vector<int>& nums) { // complexity -> O(n) , space -> O(1)

    int n = nums.size();
    int maxdiff = -1;
    int i = INT_MAX;
    for(int j=0; j<n; j++){
        if(nums[j]<i){
            i = nums[j];
        }
        else if (nums[j] > i){
            // If current number is greater than the minimum seen so far
            maxdiff = max(maxdiff , nums[j]-i);
        }
    }
    return maxdiff;
}

// Alternative implementation of maximumDifference

int maximumDifferenceAlt(vector<int>& nums) {
    int maxDifference = -1;
    int minElement = nums[0];
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] > minElement) {
            maxDifference = max(maxDifference, nums[j] - minElement);
        } else {
            minElement = nums[j];
        }
    }
    return maxDifference;
}


int main(){
    vector<int>nums = {7,1,5,4};
    cout << maximumDifference(nums) << endl; // Output: 4-> (5-1)
    return 0;
}