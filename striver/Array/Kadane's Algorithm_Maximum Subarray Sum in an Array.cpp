#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    // Get the size of the array
    int n = nums.size();

    // Initialize current sum and maximum sum
    // Start maxsum with first element to handle all-negative arrays
    int currsum = 0, maxsum = nums[0];

    // Iterate through each element in the array
    for (int i = 0; i < n; i++)
    {
        // Add current element to the running sum
        currsum += nums[i];

        // Update maximum sum if current sum is greater
        maxsum = max(maxsum, currsum);

        // If current sum becomes negative, reset it to zero
        // because a negative sum will only decrease future subarray sums
        if (currsum < 0)
        {
            currsum = 0;
        }
    }

    // Return the maximum subarray sum found
    return maxsum;
}

int main()
{

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // maxsum - {4,-1,2,1} => 6
    cout << " Maximum Sum of the Subarray is : " << maxSubArray(nums);

    return 0;
}