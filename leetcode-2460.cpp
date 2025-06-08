#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> applyOperations(vector<int>& nums) {
    
    int k = 0 ;
    for(int i=0; i<=nums.size()-1; i++){
        if(nums[i]==nums[i+1]){
            nums[i] = nums[i]*2;
            nums[i+1]= nums[i+1]*0;
        }
    }
    for(int i=0 ; i<nums.size(); i++){
        if(nums[i]!=0){
            swap(nums[i] , nums[k]);
            k++;
        }
    }
    return nums;
}


int main(){

    vector<int>arr ={1,2,2,1,1,0}; // gives this output -> {1 , 4 , 2 , 0 , 0 , 0}
    vector<int>arr1 = applyOperations(arr);
    for(auto it : arr1){
        cout<<it<<" ";
    }

    return 0;
}