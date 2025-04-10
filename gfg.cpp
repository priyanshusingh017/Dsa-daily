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

//printing the elements

void printElements(const vector<int>& elements) {
    for (int i = 0; i < elements.size(); ++i) {
        cout << elements[i] << " ";
    }
    cout << endl;
}


int main(){


    /*
    //Finding Majority Elements
    
    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    
    vector<int> result = findMajority(arr);
    
    cout << "Majority Elements: ";
    printElements(result);

    */

    /*//Stock Buy and Sell
    vector<int> prices = {1, 2, 3, 4, 5};
    int maxProfit = maximumProfit(prices);
    cout << "Maximum Profit: " << maxProfit << endl;
    */

    /*// Next Palindrome

    vector<int> arr = {2, 4, 1, 7, 5, 0};
    nextpalidrome(arr);
    cout << "Next Palindrome: ";
    printElements(arr);

    */

    // Minimum Difference

    vector<int> arr = {1, 5, 15, 10};
    int k = 3;
    int minDiff = getMinDiff(arr, k);
    cout << "Minimum Difference: " << minDiff << endl;
    


    return 0;
    
}
