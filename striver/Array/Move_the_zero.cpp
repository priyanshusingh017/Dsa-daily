#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {

    /*
      Left pointer (l): Points to the position where the next non-zero element should be placed
      Right pointer (r): Scans through the array
    */

    int n = nums.size();

    int l=0 , r=0;

    while(r<n){
        if(nums[r]!=0){
            swap(nums[l],nums[r]);
            l++;
        }
        r++;
    }
}

int main(){

    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums);

    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}