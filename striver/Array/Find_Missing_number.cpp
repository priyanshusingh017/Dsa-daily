#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int totalsum = n*(n+1)/2;

    int sum = 0;
    for(auto num : nums){
        sum += num;
    }

    int res = totalsum - sum;

    return res;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int missing = missingNumber(nums);
    cout << "Missing number is: " << missing << endl;
    return 0;
}