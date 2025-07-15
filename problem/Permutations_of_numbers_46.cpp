#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void solve(vector<int>nums , vector<vector<int>> & ans , int index){

    //base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int i=index; i<nums.size(); i++){
        
        // swap the number -> 
        swap(nums[index] , nums[i]);
        // recursion
        solve(nums , ans , index+1);
        // backtrack
        swap(nums[index] , nums[i]); // regain the original array 
    }

}
vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>>ans; 
    int index =0;
    solve(nums , ans , index);
    return ans;

}

int main(){

    vector<int>nums = {1,1,5};  // 3! = 6 number 
    vector<vector<int>>res = permute(nums);
    for(auto i: res){
        cout<<"[";
        for(auto it : i){
            cout<<it<<" ";
        }
        cout<<"]";
    }

    return 0;
}