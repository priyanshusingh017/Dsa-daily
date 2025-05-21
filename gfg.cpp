#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


//Majority Element II - and elements that appear more than n/3 times and return them in sorted order

vector<int> findMajority(vector<int>& arr) {
    
    unordered_map<int,int>freq;
    
    vector<int>ans;
    
    int n = arr.size();
    
    for(auto num : arr){

        freq[num]++;
        
    }
    
    for(auto it : freq){
        
        if(it.second > n/3){
            ans.push_back(it.first);
        }
    }
    
    sort(ans.begin() , ans.end());
    
    return ans;
}


//Stock Buy and Sell – Multiple Transaction Allowed


int maximumProfit(vector<int> &prices) {
    // code here
    
    int n = prices.size();
    int profit = 0 ;
    
    for(int i =1 ; i<n ; i++){
        
        if(prices[i]>prices[i-1]){
            
            profit += prices[i] - prices[i-1];
        }
    }
    
    return profit ;
}

// next palindrome - find the next palindrome number greater than the given number

void nextpalidrome(vector<int>& arr) {
    
    int n = arr.size();
    int i = n-2;
    while(i>=0 && arr[i]>=arr[i+1]){
        i--;
    }
    if(i>=0){
        int j=n-1;
        while(arr[i]>=arr[j]){
            j--;
        }
        swap(arr[i], arr[j]);
    }

    reverse(arr.begin()+i+1, arr.end());

}

// Minimum Difference - find the minimum difference between the maximum and minimum elements of the array after performing the operations

int getMinDiff(vector<int> &arr, int k) {
    
    int n = arr.size();
    
    if ( n == 1 ) return 0 ;
    
    
    sort(arr.begin() , arr.end());
    
    int diff = arr[n-1] - arr[0];
    
    int small , largest ;
    
    for(int i =0 ; i<n -1 ; i++){
        
        largest = max(arr[n-1]-k , arr[i]+k);
        
        small = min(arr[0]+ k , arr[i+1]-k);
        
        if( small < 0)  continue ;
        
        
        diff = min(diff , largest - small);
    }
    
    return diff ; 
}

//Kadane's Algorithm

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int i = 1; i < nums.size(); ++i) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}

// sort 0s , 1s and 2s -> 
void sort012(vector<int>& arr) {

        // sort(arr.begin() , arr.end());

        // Dutch National Flag Algorithm ->
        int low = 0 , mid = 0 , high = arr.size() - 1;
        
        while(mid<=high){
            if(arr[mid]==0){
                // swap current element with low pointer and move both pointer forward -> 
                swap(arr[low] , arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                // move the pointer -> 
                mid++;
            }
            else { // arr[mid] == 2 
                // swap current element with high pointer and move pointer backward -> 
                swap(arr[mid] , arr[high]);
                high -- ; 
            }
        }
        
}

// maximum subarray product - find the maximum product of a contiguous subarray
int maxProduct(vector<int>& arr) {
    int maxprod = arr[0];
    int currentprod = arr[0];
    int currentmin = arr[0];

    for(int i=1; i<arr.size(); i++){
        if(arr[i]<0){
            swap(currentprod , currentmin);
        }
        currentprod =max(arr[i] , currentprod*arr[i]);
        currentmin = min(arr[i] , currentmin*arr[i]);

        maxprod = max(maxprod , currentprod);
    }

    return maxprod;
}

// maximun circular subarray sum - find the maximum sum of a circular subarray
void circularSubarraySum(vector<int> &arr){

}

//printing the elements

void printElements(const vector<int>& elements) {
    for (int i = 0; i < elements.size(); ++i) {
        cout << elements[i] << " ";
    }
    cout << endl;
}


int main(){

    //Finding Majority Elements
    
    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    
    vector<int> result = findMajority(arr);
    
    cout << "Majority Elements: ";
    printElements(result);
    cout << endl;

    //Stock Buy and Sell
    vector<int> prices = {1, 2, 3, 4, 5};
    int maxProfit = maximumProfit(prices);
    cout << "Maximum Profit: " << maxProfit << endl;
    cout << endl;

    // Next Palindrome
    vector<int> arr1 = {2, 4, 1, 7, 5, 0};
    nextpalidrome(arr1);
    cout << "Next Palindrome: ";
    printElements(arr1);
    cout << endl;

    // Minimum Difference
    vector<int> arr2 = {1, 5, 8, 10};
    int k = 2;
    int minDiff = getMinDiff(arr2, k);
    cout << "Minimum Difference: " << minDiff << endl;
    cout << endl;

    // Kadane's Algorithm
    vector<int> nums = {2, 3, -8, 7, -1, 2, 3};
    int maxSum = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    cout << endl;

    // Sort 0s, 1s, and 2s
    vector<int> arr3 = {0, 1, 2, 0, 1, 2, 0};
    sort012(arr3);
    cout << "Sorted Array: ";
    printElements(arr3);
    cout << endl;
    
    // Maximum Subarray Product
    vector<int> arr4 = {2, 3, -2, 4};
    int maxProductResult = maxProduct(arr4);
    cout << "Maximum Subarray Product: " << maxProductResult << endl;
    cout << endl;

    // Maximum Circular Subarray Sum
    vector<int> arr5 = {{10, -3, -4, 7, 6, 5, -4, -1}};
    circularSubarraySum(arr5);
    cout << "Maximum Circular Subarray Sum: ";
    printElements(arr5);
    cout << endl;



    return 0;
    
}
