#include <iostream>
#include <vector>
using namespace std;

/*
 Given an array nums, return true if the array was originally sorted in non-decreasing order, 
 then rotated some number of positions (including zero). Otherwise, return false.
*/

bool check(vector<int>& nums) {
        
    //size of the array ->
    int n = nums.size();

    // initalized the count for checking ->
    int count = 0;

    // checking the array is sorted or not :
    for(int i=0; i<n; i++){

        // as sorted array is in increasing 
        // if array is rotated then count is 1. 
        if(nums[i]>nums[(i+1)%n]){
            count++;
        }
    }

    // Alternative approach for better understanding:
    /*

      // Count the number of places where the order breaks (previous > current)

      for(int i = 1; i < n; i++) {
          if(nums[i-1] > nums[i]) {
              count++;
          }
      }

      // Also check if the last element is greater than the first (rotation point)
      
      if(nums[n-1] > nums[0]) {
          count++;
      }

    */ 

    // Either approach works; count should be at most 1 for sorted and rotated array.
    return (count<=1) ? true : false ;
}

int main(){
    vector<vector<int>> testCases = {
        {3, 4, 5, 1, 2},
        {1, 2, 3, 4, 5},
        {2, 1, 3, 4},
        {1, 1, 1},
        {2, 3, 4, 5, 1},
        {1, 2, 3, 4, 0}
    };

    for (auto& nums : testCases) {
        cout << "Array: ";
        for (int num : nums) cout << num << " ";
        cout << "\nIs sorted and rotated? " << (check(nums) ? "Yes" : "No") << "\n\n";
    }

    return 0;
}