#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> divideArray(vector<int>& nums, int k) {

    sort(nums.begin(), nums.end());
    vector<vector<int>>result;
    result.reserve(nums.size()/3);
    for(int i=0; i<nums.size(); i=i+3){
        if(nums[i+2]-nums[i]>k) return {};
        result.push_back({nums[i],nums[i+1],nums[i+2]});
    }
    return result;

}

int main(){

    vector<int>nums={1,3,4,8,7,9,3,5,1};
    int k = 2;
    vector<vector<int>> nums1 = divideArray(nums , k);
    for(auto &c : nums1){
        cout<<"[";
        for(auto i : c){
            cout<<i<<" ";
        }
        cout<<"]"<<endl;

    }
    return 0;
}