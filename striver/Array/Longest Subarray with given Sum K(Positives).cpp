#include <iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int left = 0, right = 0;
    int currentSum = nums[0];
    int maxLength = 0;
    int n = nums.size();

    int count = 0;

    while (right < n)
    {

        // If sum exceeds k, shrink the window from left
        while (left <= right && currentSum > k)
        {
            currentSum -= nums[left];
            left++;
        }

        // If sum equals k, update maxLength
        if (currentSum == k)
        {
            maxLength = max(maxLength, right - left + 1);
            count++;
        }

        // Move right pointer to expand window
        right++;
        if (right < n)
        {
            // Add current element to the sum
            currentSum += nums[right];
        }
    }

    return maxLength;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 6;
    int result = subarraySum(nums, k);
    cout << "Length of longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}