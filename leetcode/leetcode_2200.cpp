#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {

    unordered_set<int>res;
    for(int j=0 ; j<nums.size(); j++){
        if(nums[j]==key){
            for(int i=0; i<nums.size(); i++){
                if((abs(i-j))<=k){
                    res.insert(i);
                }
            }
        }
    }

    vector<int>result(res.begin() , res.end());
    sort(result.begin() , result.end());

    return result;

}


int main(){

    vector<int>nums = {2,2,2,2,2};
    vector<int>result = findKDistantIndices(nums , 2, 2);
    for(auto c : result){
        cout<<c<<" ";
    }


    return 0;
}