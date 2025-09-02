#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &arr)
{
    // Code here
    unordered_map<int, int> freq;
    for (auto i : arr)
    {
        freq[i]++;
    }
    vector<int> res;
    for (auto i : freq)
    {
        if (i.second > arr.size() / 3)
        {
            res.push_back(i.first);
        }
    }

    sort(res.begin(), res.end());

    return res;
}
int main()
{

    vector<int> nums = {1, 2, 3, 1, 1, 2, 2, 2};
    vector<int> result = findMajority(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}