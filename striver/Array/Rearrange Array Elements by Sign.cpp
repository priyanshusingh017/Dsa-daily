#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// If equal no. of positive and negative then use this approach 
vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n, 0); // Initialize result array with zeros

    int even = 0, odd = 1; // Pointers for even and odd indices
    for (auto num : nums)
    {

        if (num > 0)
        {
            // Place positive numbers at even indices (0, 2, 4, ...)
            res[even] = num;
            even += 2; // Move to next even index
        }
        else
        {
            // Place negative numbers at odd indices (1, 3, 5, ...)
            res[odd] = num;
            odd += 2; // Move to next odd index
        }
    }

    return res;
}

// If not equal no. of positive and negative or equal no. both case applicable -
// alternative way -

void rearrange(vector<int> &nums)
{
    int n = nums.size();

    // Separate positive and negative numbers while maintaining order
    vector<int> positives, negatives;

    for (int num : nums)
    {
        if (num >= 0)
        {
            positives.push_back(num);
        }
        else
        {
            negatives.push_back(num);
        }
    }

    // Merge with alternate pattern starting with positive
    int i = 0, j = 0, k = 0;

    // Alternate until one list is exhausted
    while (i < positives.size() && j < negatives.size())
    {
        nums[k++] = positives[i++];
        nums[k++] = negatives[j++];
    }

    // Add remaining positive numbers
    while (i < positives.size())
    {
        nums[k++] = positives[i++];
    }

    // Add remaining negative numbers
    while (j < negatives.size())
    {
        nums[k++] = negatives[j++];
    }
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    // Using rearrangeArray
    vector<int> res = rearrangeArray(nums);
    cout << "Using rearrangeArray: ";
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;

    // Using rearrange (in-place)
    vector<int> nums2 = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    rearrange(nums2);
    cout << "Using rearrange: ";
    for (auto i : nums2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}