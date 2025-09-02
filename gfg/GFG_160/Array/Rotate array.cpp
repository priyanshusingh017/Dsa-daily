#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(vector<int> &arr, int d)
{
    // code here

    // left rotating

    int n = arr.size();

    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[(i + d) % n];
    }

    arr = temp;
}

int main()
{

    vector<int>nums = {1,2,3,4,5};

    rotateArr(nums , 2);

    for(auto i : nums){
        cout<<i<<" ";
    }

    return 0;
}