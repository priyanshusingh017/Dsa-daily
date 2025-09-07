#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxCircularSum(vector<int> &arr)
{

    int maxsum = arr[0], minsum = arr[0];
    int currmaxsum = 0, currminsum = 0;

    int totalsum = 0;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        // maximum sum
        currmaxsum += arr[i];
        maxsum = max(maxsum, currmaxsum);
        if (currmaxsum < 0)
        {
            currmaxsum = 0;
        }

        // minimum sum
        currminsum += arr[i];
        minsum = min(minsum, currminsum);
        if (currminsum > 0)
        {
            currminsum = 0;
        }

        // total sum
        totalsum += arr[i];
    }

    if (maxsum < 0)
    {
        return maxsum;
    }

    return max(maxsum, totalsum - minsum);
}

int main()
{
    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};
    cout << "Maximum circular subarray sum is " << maxCircularSum(arr) << endl; // 22 -> {12, 8, -8, 9, -9, 10}

    return 0;
}