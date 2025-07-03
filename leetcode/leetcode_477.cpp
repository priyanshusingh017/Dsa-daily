#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int totalHammingDistance(const vector<int>& nums) { 
    int n = nums.size();
    int total = 0;
    // For each bit position (0 to 31)
    for (int bit = 0; bit < 32; ++bit) {
        int countOnes = 0;
        for (int num : nums) {
            countOnes += (num >> bit) & 1;
        }
        int countZeros = n - countOnes;
        total += countOnes * countZeros;
    }
    return total;
}

// for better understanding try to solve -> leetcode_461


int main(){

    vector<int>nums = {4,14,2}; // 6 as -> 4,14 -> 2 , 4,2-> 2 , 14,2 -> 2 
    cout<<totalHammingDistance(nums)<<endl;

}