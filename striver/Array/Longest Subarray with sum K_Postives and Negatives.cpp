#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr, int k)
{

    // Using unordered_map to store prefix sums and their first occurrence indices
    unordered_map<int, int> prefixsum;

    // Initialize current sum and maximum length of subarray
    int currsum = 0, maxlength = 0;

    // Iterate through each element in the array
    for (int i = 0; i < arr.size(); i++)
    {

        // Calculate cumulative sum up to current index
        currsum += arr[i];

        // Check if subarray from index 0 to current index has sum equal to k
        if (currsum == k)
        {

            maxlength = max(maxlength, i + 1);
        }

        // Check if there exists a subarray in the middle with sum k
        // ex - sum[1-i] = sum[0-i]-sum[0-1];
        // If (currsum - k) exists in map, it means there's a subarray

        if (prefixsum.find(currsum - k) != prefixsum.end())
        {

            // means that found the sum
            maxlength = max(maxlength, i - prefixsum[currsum - k]);
        }

        if (prefixsum.find(currsum) == prefixsum.end())
        {

            // Store the first occurrence of current prefix sum
            // This ensures we get the longest possible subarray
            prefixsum[currsum] = i;
        }
    }

    return maxlength;
}

int main()
{

    vector<int>nums = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout<<longestSubarray(nums , k); // 6 - [10, 5, 2, 7, 1, -10]

    return 0;
}