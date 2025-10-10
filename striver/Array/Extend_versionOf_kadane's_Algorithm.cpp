#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int MaxSubArray(vector<int>& nums) {

    // Get the size of the array
    int n = nums.size();

    // Initialize current sum and maximum sum
    // Start maxsum with first element to handle edge case: array with single element or all negative numbers
    int currsum = 0, maxsum = nums[0];

    int start = 0;                    // Tracks start of current subarray
    int arraystart = 0, arrayend = 0; // Track indices of maximum sum subarray

    // Iterate through all elements of the array
    for(int i = 0; i < n; i++) {

        // If current sum becomes 0, start a new subarray from current index
        if (currsum == 0) start = i;

        // Add current element to running sum
        currsum += nums[i];

        // If we found a new maximum sum, update maxsum and track indices
        if(currsum > maxsum) {
            maxsum = currsum;
            arraystart = start;  // Store start index of max sum subarray
            arrayend = i;        // Store end index of max sum subarray
        }

        // Kadane's Algorithm: Reset current sum if it becomes negative
        // Negative sum will only decrease future subarray sums
        if(currsum < 0) {
            currsum = 0;
        }
    }
    // Display the subarray that produces maximum sum
    cout << "The subarray is : " << "[";
    for(int i = arraystart; i <= arrayend; i++) {
        cout << nums[i] << " ";
    }
    cout << "]";
    cout << endl;

    return maxsum;
}

int main()
{
    // Example input: array with both positive and negative numbers
    
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    // Expected maximum sum subarray: {4, -1, 2, 1} = 6

    int maxSum = MaxSubArray(nums);

    cout << "Maximum Sum of the Subarray is : " << maxSum << endl;

    return 0;
}