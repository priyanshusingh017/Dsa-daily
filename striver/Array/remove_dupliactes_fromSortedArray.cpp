#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
 Input: nums = [0,0,1,1,1,2,2,3,3,4]
 Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
 Explanation: Your function should return k = 5, 
 with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
 It does not matter what you leave 
 beyond the returned k (hence they are underscores). 

*/

int removeDuplicates(vector<int>& nums) {

    int l = 0 , r = 1;

    while(r<nums.size()){

        if(nums[l]!=nums[r]){
            l++;
            nums[l]=nums[r];
        }
        r++;
    }

    return l+1;
}

// alternative way 
int removeDuplicates1(vector<int>&nums){

    int k = 1;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]!=nums[i-1]){
            nums[k]=nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicates1(nums);

    cout << "k = " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
