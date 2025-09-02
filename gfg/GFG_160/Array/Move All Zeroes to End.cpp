#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(vector<int> &arr)
{

    int left = 0;
    for (int right = 0; right < arr.size(); right++)
    {
        if (arr[right] != 0)
        {
            swap(arr[right], arr[left]);
            left++;
        }
    }
}

int main()
{
    vector<int>nums = {1,2,0,0,4,5,6};
    
    pushZerosToEnd(nums);

    for(auto x : nums){
        cout<<x<<" ";
    }

    return 0;
}