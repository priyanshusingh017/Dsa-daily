#include<iostream>
#include<vector>
using namespace std;

/*
 nice number is ->  if a & b = 0 then it is said to be a nice pair 
 subarray -> contiguous elements 
 nice subarray -> a subarray where every pair of elements is a nice pair
*/

// Function to find the length of the longest nice subarray
int longestnicesubarray(vector<int> nums) {
    int left = 0, maxlen = 1, countbit = 0;
    // Iterate through the array with the right pointer
    for (int right = 0; right < nums.size(); right++) {
        // If current number shares any set bit with the window, shrink window from left
        while ((countbit & nums[right]) != 0) {
            countbit ^= nums[left]; // Remove leftmost element's bits from countbit
            left++; // Move left pointer forward
        }
        countbit |= nums[right]; // Add current number's bits to countbit
        maxlen = max(maxlen, right - left + 1); // Update maximum length
    }
    // Return the maximum length found
    return maxlen;
}

int main(){

    vector<int>nums = {1,3,8,48,5};

    cout<<" length of maximum nice subarray:  "<<longestnicesubarray(nums); 
    // 3 -> { 3 , 8 , 48} => { 3 & 8 =0 , 3 & 48 = 0 , 8 & 48 = 0};

}