#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

// leetcode - 1695
int maximumUniqueSubarray(vector<int> &nums)
{

    unordered_set<int> st;
    int left = 0, sum = 0, maxsum = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        // checking for duplicate element
        while (st.count(nums[right]))
        {
            st.erase(nums[left]);
            sum -= nums[left];
            left++;
        }
        // insert the element in set  && sum of element
        st.insert(nums[right]);
        sum += nums[right];

        // checking for maximum sum
        maxsum = max(maxsum, sum);
    }

    return maxsum;
}

int main()
{

    vector<int>nums0 = {4,2,4,5,6};

    // vector<int> nums = {18, 8, 8, 19, 3, 1, 19, 1, 15, 13, 10, 4, 
    //     12, 2, 3, 3, 11, 4, 20, 11, 12, 4, 14, 9, 8, 1, 13, 15, 9, 20, 12, 
    //     13, 11, 8, 7, 8, 15, 10, 5, 17, 4, 10, 18, 5, 12, 18, 5, 16, 13, 2};

    // ans - 107 

    cout << maximumUniqueSubarray(nums0); // 17

    return 0;
}