#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int>temp(n);
    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%n] = nums[i];
    }
    nums=temp;
}

void rotateright(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int>temp1(n);
    for(int i=0; i<nums.size(); i++){
        temp1[i] = nums[(i+k)%n];
    }
    nums=temp1;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> nums2 = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    // Using rotate (left rotation)
    rotate(nums1, k);
    cout << "After rotate (left): ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    // Using rotateright (right rotation)
    rotateright(nums2, k);
    cout << "After rotateright (right): ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}