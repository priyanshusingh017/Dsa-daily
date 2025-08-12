#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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

int main(){

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);
    cout << "Sliding window max values: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}