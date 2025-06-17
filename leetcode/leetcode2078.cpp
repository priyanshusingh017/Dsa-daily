#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxDistance(vector<int>& colors) {
    int maxdis=0;
    int n = colors.size();
    // check the first house 
    for(int i=n-1; i>0; i--){
        if(colors[0] != colors[i]){
            maxdis = max(maxdis , i);
            break; // Found a different color, no need to check further
        }
    }
    // check the last house
    for(int i=0; i<n-1; i++){
        if(colors[n-1] != colors[i]){
            maxdis = max(maxdis , n-1-i);
            break; // Found a different color, no need to check further
        }
    }
    return maxdis;
}


int main(){
    vector<int> nums = {1,1,1,6,1,1,1};
    cout << maxDistance(nums) << endl; // Output: 3 (as index 0 and 3 are different colors) => 3 
    return 0; 
}