#include <iostream>
#include<vector>
using namespace std;

/*
  Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

  You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

int singleNumber(vector<int> &nums)
{

    /*
    // Apporach 1 -

    unordered_map<int,int>freq;

    for(auto num : nums ){
        freq[num]++;
    }

    for(auto i : freq){
        if(i.second==1){
            return i.first;
        }
    }

    return -1;

    */

    // Apporach 2 -

    int res = 0;

    for(auto num : nums)
    {
        res = res ^ num;
    }

    return res;
}

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << "Single number is: " << singleNumber(nums) << endl;

    return 0;
}