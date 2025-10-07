#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
 Linear Search:
 1. Linear search is a simple searching algorithm that checks every element in a list sequentially 
    until the desired element is found or the list ends. 
 2. It works on both sorted and unsorted arrays. The time complexity is O(n), where n is the number of elements in the array.

 Time Complexity: O(n), where n is the length of the array.
 Space Complexity: O(1)

*/

int linearSearch(vector<int>&nums , int target){

    int res = -1;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            res=i;
            break;
        }
    }

    return res;
}

int main(){
    vector<int> nums = {10, 20, 30, 40, 50};
    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int index = linearSearch(nums, target);
    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}