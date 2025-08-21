#include <bits/stdc++.h>
using namespace std;

void  findmissingnumber(int arr[], int n)
{

    sort(arr, arr + n - 1);

    int d1 = arr[1] - arr[0];
    int d2 = arr[2] - arr[1];
    int d = min(d1, d2);

    int a = arr[0];
    int expect_sum = (n * (2 * a + (n - 1) * d)) / 2;

    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        actual_sum += arr[i];
    }

    cout<<expect_sum - actual_sum;
}

int main()
{

    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    findmissingnumber(arr, n) ;
  

    return 0;
}