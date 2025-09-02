#include<iostream>
#include<vector>
using namespace std;

int maxsubarray(vector<int>&nums){

    int sum =0; 
    int maxsum = nums[0];

    for(int i=0; i<nums.size(); i++){

        sum = sum+ nums[i];
        maxsum = max(maxsum , sum);
        if(sum<0){
            sum =0;
        }
    }

    return maxsum;
}

int main(){

    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<maxsubarray(nums);

    return 0;
}