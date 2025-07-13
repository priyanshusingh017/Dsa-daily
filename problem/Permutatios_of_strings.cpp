#include<iostream>
#include<vector>
using namespace std;

void solve (vector<string>nums , vector<vector<string>>&ans , int index){

    //base case
    if(index>= nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int j = index ; j<nums.size();j++){
        swap(nums[index] , nums[j]);
        solve(nums , ans , index+1);
        //backtrack
        swap(nums[index] , nums[j]); // to restore the original array 
    }
}

vector<vector<string>> permute(vector<string>& nums) {

    vector<vector<string>>ans;
    int index =0;
    solve(nums , ans , index);
    return ans;
        
}

int main(){

    vector<string>nums = {"a" , "b" , "c"};
    vector<vector<string>>res = permute(nums);
    for(auto it : res){
        cout<<"[";
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<"]";
    }

    return 0;
}