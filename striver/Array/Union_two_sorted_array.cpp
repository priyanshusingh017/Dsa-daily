#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{

    // size of the given array
    int n = a.size(), m = b.size();

    // initalized the resulant array
    vector<int> res;

    // track the index of the given array and res as i for a and j for b -
    int i = 0, j = 0;

    // condition -
    while (i < n && j < m)
    {

        // check whether the element is greater
        if (a[i] <= b[j])
        {

            // check for res is empty and current element is not duplicate
            if (res.empty() || res.back() != a[i])
            {

                res.push_back(a[i]);
            }

            i++;
        }
        else
        {

            // check for res is empty and current element is not duplicate
            if (res.empty() || res.back() != b[j])
            {

                res.push_back(b[j]);
            }

            j++;
        }
    }

    // condition 2 - if the given array sizes is not same

    while (i < n)
    {

        if (res.empty() || res.back() != a[i])
        {

            res.push_back(a[i]);
        }

        i++;
    }

    while (j < m)
    {

        if (res.empty() || res.back() != b[j])
        {

            res.push_back(b[j]);
        }

        j++;
    }

    return res;
}

// alternative approach - in my opinion best one -> using set

vector<int> findUnion1(vector<int> &a, vector<int> &b)
{
    // Using set to automatically handle duplicates and sorting
    set<int> s;

    // Insert all elements from first array into set
    // Duplicates are automatically ignored by set
    for (auto num : a)
    {
        s.insert(num);
    }

    // Insert all elements from second array into set
    // Any duplicates with first array or within second array are ignored
    for (auto num : b)
    {
        s.insert(num);
    }

    // Convert the set to vector
    // Set elements are already in sorted order and unique
    vector<int> res(s.begin(), s.end());

    return res;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 3, 6, 8};

    vector<int> result = findUnion1(arr1, arr2);

    cout << "Union of two sorted arrays: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}