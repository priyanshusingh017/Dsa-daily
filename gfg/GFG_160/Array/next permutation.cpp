#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{

    int n = arr.size();
    int i = n - 2;
    // start from right hand size to
    // find the smallest element from right hand side

    while (i >= 0 && arr[i] >= arr[i + 1])
    {
        i--;
    }

    // if i's index is postive

    if (i >= 0)
    {

        int j = n - 1;
        // to find the first greater element from right hand size
        while (arr[i] >= arr[j])
        {
            j--;
        }
        swap(arr[i], arr[j]);
    }

    reverse(arr.begin() + i + 1, arr.end());
}

int main()
{
    vector<int> arr = {2,1,3,4,5,0,0};
    nextPermutation(arr); // {2 1 3 5 0 0 4 }
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}