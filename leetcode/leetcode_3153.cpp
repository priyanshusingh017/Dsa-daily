#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long sumDigitDifferences(vector<int>& nums) {

    long long res = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int diff = (abs(nums[i]-nums[j]));
            if(diff==0){
                res +=0;
            }
            else if(diff%10==0 || diff==1){
                res+=1;
            }
            else{
                res+=2;
            }
        }
    }
    return res;
}

int main(){

    vector<int>nums={13,23,12};
    cout<<sumDigitDifferences(nums)<<endl;
    
    return 0;
}