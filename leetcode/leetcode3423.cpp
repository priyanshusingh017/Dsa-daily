#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// maximum difference btw adjacent elements in circular array . 
int maxAdjacentDistance(vector<int>& nums) { // O(n) solution
    int n=nums.size();
    int maxdifference =0;
    for(int i=0; i<n; i++){
        int nextindex = (i+1)%n; // circular array condition 
        maxdifference = max(maxdifference , abs(nums[i] - nums[nextindex]));   
    }
    return maxdifference;
}

int main(){

    vector<int>arr={1,2,4};
    vector<int>arr1={-5 , -10 , -5};
    cout<<maxAdjacentDistance(arr)<<endl;
    cout<<maxAdjacentDistance(arr1)<<endl;


    return 0;
}