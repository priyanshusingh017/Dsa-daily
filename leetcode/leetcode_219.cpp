#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate0(vector<int>& nums, int k) {
    int n = nums.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]==nums[j] && abs(i-j)<=k){
                return true;
            }
        }
    }
    return false;
}

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int , int>numindex;
    for(int i=0; i<n; i++){
        if(numindex.find(nums[i]) != numindex.end()){
            // checks the first condition wheather duplicate or not till the map end. -> nums[i]==nums[j]
            if(abs(i - numindex[nums[i]]) <=k ){
                // checks the second condition -> abs(i-j)<=k 
                return true;
            }
        }
        numindex[nums[i]] =i; 
    }
    return false;
}

bool containsNearbyDuplicate1(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_set<int>numsindex;
    for(int i=0; i<n; i++){
        if(numsindex.count(nums[i])){ // check if the element is prsent in the set or not 
            return true;
        }
        numsindex.insert(nums[i]);

        if(numsindex.size()>=k){
            numsindex.erase(nums[i-k]); // refer to the elemnt which have to remove 
        }
    }
    return false;
}

int main(){

    vector<int>nums = {1,2,3,1,2,3};
    cout<<containsNearbyDuplicate(nums , 2)<<endl;
    cout<<containsNearbyDuplicate1(nums , 2)<<endl;
    return 0;
}