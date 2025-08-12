#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// approach 1 -> 
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    deque<int>q;
    vector<int>ans;
    for(int i=0; i<n; i++){
        // track the sliding window element 
        if(!q.empty() && i-q.front()>=k){
            q.pop_front();
        }
        // remove the smaller element 
        while(!q.empty() && nums[q.back()]<nums[i]){
            q.pop_back();
        }
        //adding the index in deque
        q.push_back(i);

        // condition to push_back in ans
        if(i>=k-1){
            ans.push_back(nums[q.front()]);
        }
    }

    return ans;
}

// approach 2 -> 
vector<int>maxslidingwindow(vector<int>&nums , int k){
   
    int n = nums.size(); // size of the array 

    deque<int>q; 
    vector<int>ans;

    // traversal and perform the operation from the 0 to k element or first sliding window 
    for(int i=0; i<k; i++){
        // tackle with smaller elemnent 
        while(!q.empty() && nums[q.back()]<nums[i]){
            q.pop_back();
        }
        // adding the index in the deque 
        q.push_back(i);

        //not add the num to answer until reach the kth element 
        if(i>=k-1){
            ans.push_back(nums[q.front()]);
        }
    }

    // traversal and perform the operation from k to n or next sliding window
    for(int i=k; i<n; i++){
        // check the sliding window condition 
        if(!q.empty() && i-q.front()>=k){
            q.pop_front();
        }
        // remove the smaller element index comparison to the current element 
        while(!q.empty() && nums[q.back()]<nums[i]){
            q.pop_back();
        }
        // adding the index to the deque
        q.push_back(i);
        // now the sliding window maintain with moving to the next element -> so no need to add the condition here 
        ans.push_back(nums[q.front()]);
    }

    return ans;
}

int main(){

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxslidingwindow(nums, k);
    cout << "Sliding window max values: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}