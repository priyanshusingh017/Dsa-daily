#include <bits/stdc++.h>
using namespace std;

/*
Given an array of integers and a window size k, for every contiguous subarray (window) of size k, 
count the number of distinct elements in that window.

Example:
Input: arr = [1, 2, 1, 3, 4, 2, 3], k = 4
Output: 3 4 4 3

Explanation:
- Window [1, 2, 1, 3] has 3 distinct elements: 1, 2, 3
- Window [2, 1, 3, 4] has 4 distinct elements: 1, 2, 3, 4
- Window [1, 3, 4, 2] has 4 distinct elements: 1, 2, 3, 4
- Window [3, 4, 2, 3] has 3 distinct elements: 2, 3, 4
*/

vector<int> countDistinct(vector<int> &arr, int k)
{

    vector<int> res;

    unordered_map<int, int> freq;

    for (int i = 0; i < k; i++)
    {
        freq[arr[i]]++;
    }

    res.push_back(freq.size());

    for (int i = k; i < arr.size(); i++)
    {
        freq[arr[i]]++;
        freq[arr[i - k]]--;

        if (freq[arr[i - k]] == 0)
        {
            freq.erase(arr[i - k]);
        }

        res.push_back(freq.size());
    }

    return res;
}

int main() {
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;

    vector<int> result = countDistinct(arr, k);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}