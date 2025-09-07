#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {

    int n = arr.size();
    int maxsum = arr[0] , sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        maxsum = max(maxsum , sum);
        if(sum<0){
            sum=0;
        }
    }

    return maxsum;

}

int main(){

    vector<int>nums = {2, 3, -8, 7, -1, 2, 3};

    cout<<maxSubarraySum(nums)<<endl; // 11 -> [7, -1, 2, 3]

    vector<int>nums1 = {-2, -4};
    cout<<maxSubarraySum(nums1)<<endl; // -2

    return 0;
}