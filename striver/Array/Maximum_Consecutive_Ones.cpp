#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        
    int count = 0 , maxcount = 0;

    for(auto num : nums){
        if(num == 1){
            count ++;
        }
        else{
            count=0;
        }
        maxcount = max(count , maxcount);
    }

    return maxcount;
}

int main(){
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Maximum consecutive ones: " << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}