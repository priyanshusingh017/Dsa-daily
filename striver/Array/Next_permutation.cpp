#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{

    // Get the size of the array
    int n = nums.size();

    // Find the first decreasing element from the right
    // Start from the second last element and move left
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }

    // If we found a valid pivot element (i >= 0)
    if (i >= 0)
    {
        // Find the smallest element greater than nums[i] from the right
        int j = n - 1;
        while (j >= 0 && nums[i] >= nums[j])
        {
            j--;
        }

        // Swap the pivot element with the next greater element
        swap(nums[i], nums[j]);
    }

    // Reverse the suffix (elements after the pivot)
    // This gives the smallest possible arrangement for the suffix
    reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3};

    cout << "Original permutation: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}