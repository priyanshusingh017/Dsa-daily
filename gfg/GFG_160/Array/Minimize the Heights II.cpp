#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(vector<int> &arr, int k)
{

    int n = arr.size();

    sort(arr.begin(), arr.end());

    int ans = arr[n - 1] - arr[0]; // original difference

    int smallest = arr[0] + k, largest = arr[n - 1] - k;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - k < 0)
        {
            continue;
        }

        int minH = min(arr[0] + k, arr[i] - k);
        int maxH = max(arr[i - 1] + k, arr[n - 1] - k);

        ans = min(ans, maxH - minH);
    }

    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // arr[] = {1,5,8,10} // output - 5
    cout << getMinDiff(arr, k) << endl;
    return 0;
}