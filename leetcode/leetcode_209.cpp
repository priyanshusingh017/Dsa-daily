#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int minSubArrayLen(int k, vector<int>& nums) {

    int l = 0 ;
    int sum = 0;
    int minlen = INT_MAX;

    for(int r=0 ; r<nums.size(); r++){
        sum += nums[r];
        while(sum>=k){
            minlen = min(minlen , r-l+1);
            sum -= nums[l];
            l++;
        }
    }
    return minlen == INT_MAX ? 0 : minlen;
}


int main(){

    vector<int>num = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , num)<<endl;

    return 0;
}