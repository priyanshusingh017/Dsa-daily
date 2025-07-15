#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
void solve (vector<int>& nums , int index , set<vector<int>>&ans1){

    if(index == nums.size()){
        ans1.insert(nums);
        return ;
    }

    for(int i = index ; i<nums.size(); i++){

        swap(nums[index] , nums[i]);

        solve(nums , index+1 , ans1);

        swap(nums[index] , nums[i]);
    }

}

void nextPermutation(vector<int>& nums) {

    set<vector<int>>ans1;
    int index = 0;
    solve(nums , index , ans1);
    vector<vector<int>>ans(ans1.begin() , ans1.end());
    sort(ans.begin() , ans.end());
    int n = ans.size();
    for(int i=0; i<n; i++){
        if(ans[i]==nums){
            vector<int>next = ans[(i+1)%n];
            nums = next;
            return;
        }
    }
}
*/

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n-2;
    while(i>=0 && nums[i]>=nums[i+1]) i--;
    if(i>=0){
        int j=n-1;
        while(nums[j]<=nums[i]) j--;

        swap(nums[j] , nums[i]);
    }
    reverse(nums.begin()+i+1 , nums.end());
    for(auto i : nums) cout<<i<<" ";
    cout<<endl;
}

int main(){

    vector<int> nums = {1,2,3};
    nextPermutation(nums);

    return 0;
}