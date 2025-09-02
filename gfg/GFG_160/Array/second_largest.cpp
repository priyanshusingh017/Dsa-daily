#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr)
{

    sort(arr.begin(), arr.end(), greater<int>());
    int secondlargest = arr[0];
    for (auto x : arr)
    {
        if (x < secondlargest)
        {
            return x;
        }
    }

    return -1;
}

int main()
{

    vector<int>nums = {12, 35, 1, 10, 34, 1};
    cout<<getSecondLargest(nums); // 34

    return 0;
}