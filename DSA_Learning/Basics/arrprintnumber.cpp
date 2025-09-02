#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>arrayprint(vector<int>&nums){
    int n = nums.size();
    vector<int>res;
    int l=0 , r=n-1;
    while(l<=r){
        if(nums[l]>nums[r]){
            res.push_back(1);
            r--;
        }
        else if (nums[l]<nums[r]){
            res.push_back(2);
            l++;
        }
        else{
            res.push_back(0);
            l++;
            r--;
        }
    }
    return res;
}



int main(){

    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    vector<int>res = arrayprint(nums);
    for(auto i:res){
        cout<<i<<" ";
    }

    return 0;
}