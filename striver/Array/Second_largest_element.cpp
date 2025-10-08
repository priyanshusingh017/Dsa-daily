#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SecondSmallestElement(vector<int>&nums){

    /*
    // Using Priority-Queue -
    priority_queue<int>maxheap;

    int k =2 ; // for second smallest element 
    
    for(int i=0 ; i<k; i++){
        maxheap.push(nums[i]);
    }

    for(int i=k; i<nums.size(); i++){
        if(nums[i]<maxheap.top()){
            maxheap.pop();
            maxheap.push(nums[i]);
        }
    }

    return maxheap.top();

    */

    int smallest = INT_MAX , secondsmallest = INT_MAX;

    for(auto num : nums){

        if(num<smallest ){
            secondsmallest = smallest ;
            smallest=num;
        }
        else if (num < secondsmallest && secondsmallest != smallest ){
            secondsmallest = num;
        }
    }

    return secondsmallest;
}

int secondLargest(vector<int>nums){

    int largest = INT_MIN , secondlargest = INT_MIN;

    for(auto num : nums){

        if(num>largest){
            secondlargest = largest;
            largest=num;
        }
        else if (num > secondlargest && secondlargest != largest){
            secondlargest = num;
        }
    }

    return secondlargest;
}



int main(){

    vector<int>nums = {2,4,8,1,0,4,7,6};

    cout << "Second Smallest Element: " << SecondSmallestElement(nums) << endl;
    cout << "Second Largest Element: " << secondLargest(nums) << endl;

    return 0;
}