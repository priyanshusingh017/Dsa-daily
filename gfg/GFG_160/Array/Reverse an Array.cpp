#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr)
{
    // code here
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {

        swap(arr[left], arr[right]);

        left++;
        right--;
    }
}

int main()
{

    vector<int>nums = {3,2,1,7,2,8,9};
    reverseArray(nums);

    for(auto i : nums){
        cout<<i<<" ";
    }

    return 0;
}