#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        deque<int> dq;
        vector<int> ans;

        // process first window of k size

        for (int i = 0; i < k; i++)
        {
            if (arr[i] < 0)
            {
                dq.push_back(i);
            }
        }

        // store ans of first k sized window
        if (dq.size() > 0)
        {
            ans.push_back(arr[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }

        // check the rest of window
        for (int i = k; i < arr.size(); i++)
        {
            if (!dq.empty() && i - dq.front() >= k)
            {
                dq.pop_front();
            }
            if (arr[i] < 0)
            {
                dq.push_back(i);
            }

            // store ans of first k sized window
            if (dq.size() > 0)
            {
                ans.push_back(arr[dq.front()]);
            }
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 2;
    Solution sol;
    vector<int> res = sol.firstNegInt(arr, k);
    cout << "First negative integer in every window of size " << k << ": "<<endl;
    for (int x : res)
        cout << x << " ";
    cout << endl;
    return 0;
}