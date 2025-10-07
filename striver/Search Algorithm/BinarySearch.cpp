#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*

Binary Search is an efficient algorithm for finding an element in a sorted array.
It works by repeatedly dividing the search interval in half:
1. Compare the target value to the middle element of the array.
2. If they are equal, the search is successful.
3. If the target is less than the middle element, search the left half.
4. If the target is greater, search the right half.
5. Repeat until the element is found or the interval is empty.

Time Complexity: O(log n)
Space Complexity: O(1)
The array must be sorted for binary search to work correctly.

*/


int binarySearch(vector<int>&nums , int target){

    int s = 0 , e = nums.size()-1;

    while(s<=e){

        int mid = s + (e-s)/2;

        if(nums[mid]==target){
            return mid;
        }

        if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return -1;
}

int main(){
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target;
    cout << "Enter target to search: ";
    cin >> target;

    int index = binarySearch(nums, target);

    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}