#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &arr)
{
    // code here

    int maxprod = arr[0]; // 2 6 36  180

    int minprod = arr[0]; // 2 -12 , 6 -18 36 -360

    int currprod = arr[0]; // 2 6 -12 36 -18 180

    for (int i = 1; i < arr.size(); i++)
    {

        if (arr[i] < 0)
        {
            swap(minprod, currprod);
        }

        currprod = max(arr[i], currprod * arr[i]);

        minprod = min(arr[i], minprod * arr[i]);

        maxprod = max(maxprod, currprod);
    }

    return maxprod;
}

int main()
{
    vector<int> arr = {2, 3, -2, 4};
    cout << "Maximum Product Subarray: " << maxProduct(arr) << endl; // 6 
    return 0;
}