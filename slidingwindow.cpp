#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maxsum(vector<int>& arr , int k){

    int n = arr.size();

    if(n<k){
        return -1;
    }

    int maxsum=0;

    for(int i=0 ; i<k; i++){
        maxsum += arr[i];
    }

    int currentsum = maxsum;
    for(int i=k; i<n; i++){
        currentsum += arr[i] - arr[i-k];

        maxsum = max(currentsum , maxsum);
    }

    return maxsum;

}


int main(){

    vector<int> arr = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    cout << maxsum(arr, k);


    return 0;
}