#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printarray(int ans[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout<<endl;
}

// Method 1 - using extra array
void reversearray(int arr[], int n)
{
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[n - i - 1] = arr[i];
    }
    printarray(ans, n);
}

// Method 2 - using two pointer metthod 
void reversearraypointer(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++, e--;
    }
    printarray(arr, n);
}

// Method 3 - using recursive method - same as two pointer
void reversearrayrecursive(int arr[], int s, int e)
{
    if(s < e)
    {
        swap(arr[s], arr[e]);
        reversearrayrecursive(arr, s + 1, e - 1);
    }
}

// Method 4 - using built - in - libray
void reversearrayfunction(int arr[], int n)
{
    reverse(arr, arr + n);
    printarray(arr, n);
}

int main()
{

    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    //reversearray(arr, n);
    //reversearrayfunction(arr,n);
    //reversearraypointer(arr,n);
    reversearrayrecursive(arr, 0 , n-1);
    printarray(arr, n);

    return 0;
}