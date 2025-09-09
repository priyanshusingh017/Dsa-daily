#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int> &arr)
{
    int n = arr.size();

    vector<bool> seen(n + 1, false);
    for (int num : arr)
    {
        if (num > 0 && num <= n)
        {
            seen[num] = true;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!seen[i])
        {
            return i;
        }
    }

    return n + 1;
}

int main()
{
    vector<int> arr = {3, 4, -1, 1};
    cout << "Smallest missing positive: " << firstMissingPositive(arr) << endl;

    arr = {1, 2, 0};
    cout << "Smallest missing positive: " << firstMissingPositive(arr) << endl;

    arr = {7, 8, 9, 11, 12};
    cout << "Smallest missing positive: " << firstMissingPositive(arr) << endl;

    return 0;
}