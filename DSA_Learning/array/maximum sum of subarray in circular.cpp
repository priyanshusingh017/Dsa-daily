#include<iostream>
#include<vector>
using namespace std;

int maxicircularsum(vector<int>&arr){

    int totalsum = 0;
    int currmaxsum = 0 , currminsum = 0;
    int maxsum = arr[0] , minsum = arr[0];

    for(int i=0; i<arr.size(); i++){

        // kadane's algorithm - maxsum 
        currmaxsum = currmaxsum+arr[i];
        maxsum = max(maxsum , currmaxsum);
        if(currmaxsum<0) currmaxsum=0;

        // kadane's algorithm - minsum
        currminsum = currminsum+arr[i];
        minsum = min(currminsum , minsum);
        if(currminsum>0) currminsum =0;

        totalsum += arr[i];
    }
    if(maxsum < 0) return maxsum ; // if all the element is negative 
    return max(maxsum , totalsum-minsum);
}

int main() {
    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};
    cout << maxicircularsum(arr);

    return 0;
}