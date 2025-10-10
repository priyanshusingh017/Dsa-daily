#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr)
{
    // Dutch National Flag Algorithm
    // Three pointers to partition the array:
    // low: boundary for 0s (all elements before low are 0s)
    // mid: current element being processed
    // high: boundary for 2s (all elements after high are 2s)
    
    int mid = 0, low = 0, high = arr.size() - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            // Move 0 to the beginning section
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            // 1 is in correct position (middle section)
            mid++;
        }
        else
        {
            // Move 2 to the end section
            swap(arr[mid], arr[high]);
            high--;
            
            // Important: Don't increment mid here
            // We need to check the new element that came from high position
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 0};
    sort012(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}