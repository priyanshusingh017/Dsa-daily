#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> &arr, int target){
    // Sort the array to use two-pointer technique->
    sort(arr.begin(), arr.end());

    int left = 0, right = arr.size() - 1;
    while (left < right){
        int sum = arr[left] + arr[right];

        if (sum == target)
            return true;
        
        // Move toward a higher sum
        else if (sum < target)
            left++; 
      
        // Move toward a lower sum
        else
            right--; 
    }
  
    // If no pair found
    return false;
}

int minAbsSumPair(vector<int>& arr) {
    // Sort the array to use two-pointer technique->
    sort(arr.begin(), arr.end());

    int left =0 , right = arr.size()-1;
    int sum = INT_MAX;
    //int minsum=0;
    while(left < right){
        int currentsum = arr[left] + arr[right];
        
        if(currentsum == 0) return 0; // Found the minimum possible sum

        // Update the minimum sum if the current sum is smaller
        if(abs(currentsum) < abs(sum)){
            sum = currentsum;
            //minsum = currentsum;
        }
        if(abs(currentsum) == abs(sum)) {
            
            sum = max(sum, currentsum); 
        }

        // Move pointers based on the current sum
        if(currentsum < 0) {
            left++; // Move left pointer to increase the sum
        } else {
            right--; // Move right pointer to decrease the sum
        }
    }
    return sum; // Return the minimum absolute sum found
        
}

// triple sum problem -> 
bool hasTripletSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-2; i++){
        int l=i+1 , r= arr.size()-1;
        int requriedsum = target - arr[i];
        while(l<r){
            int currentsum = arr[l]+arr[r];
            if(currentsum == requriedsum){
                return true;
            }
            else if(currentsum < requriedsum) {
                l++; // Move left pointer to increase the sum
            } else {
                r--; // Move right pointer to decrease the sum
            }
        }
    }
    return false; // If no triplet found
}

// four sum problem ->
bool hasQuadrupletSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-3; i++){
        for(int j=i+1; j<arr.size()-2; j++){
            int l=j+1 , r= arr.size()-1;
            int requriedsum = target - (arr[i] + arr[j]);
            while(l<r){
                int currentsum = arr[l]+arr[r];
                if(currentsum == requriedsum){
                    return true;
                }
                else if(currentsum < requriedsum) {
                    l++; // Move left pointer to increase the sum
                } else {
                    r--; // Move right pointer to decrease the sum
                }
            }
        }
    }
    return false; // If no quadruplet found
}

int main(){

    // Example usage of twoSum function->

    vector<int> arr1 = {1, 2, 3, 4, 5};
    int target = 9;
    if (twoSum(arr1, target)) {
        cout << "Pair with sum " << target << " exists." << endl;
    } else {
        cout << "No pair with sum " << target << " exists." << endl;
    }

    // Example usage of minAbsSumPair function->
    vector<int> arr = {0, -8, -6, 3};
    int minSum = minAbsSumPair(arr);
    cout << "Minimum absolute sum of pairs: " << minSum << endl;


    // Example usage of hasTripletSum function->
    vector<int> arr2 = {1, 2, 3, 4, 5};
    int targetSum = 10;
    if (hasTripletSum(arr2, targetSum)) {
        cout << "Triplet with sum " << targetSum << " exists." << endl;
    } else {
        cout << "No triplet with sum " << targetSum << " exists." << endl;
    }

    // Example usage of hasQuadrupletSum function->
    vector<int> arr3 = {10, 20, 30, 40, 1, 2};
    int targetQuadrupletSum = 91;
    if (hasQuadrupletSum(arr3, targetQuadrupletSum)) {
        cout << "Quadruplet with sum " << targetQuadrupletSum << " exists." << endl;
    } else {
        cout << "No quadruplet with sum " << targetQuadrupletSum << " exists." << endl;
    }



    return 0;
}