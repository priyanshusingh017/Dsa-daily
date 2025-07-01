#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
 // not optimixze 
    priority_queue<int , vector<int> , greater<int>>minheap;
    int count = k;
    for(int i=0; i<nums1.size(); i++){
        for(int j=0; j<nums2.size(); j++){
            minheap.push(static_cast<long long>(nums1[i]) * nums2[j]);
        }
    }
    long long ans=0;
    for(int i=0 ; i<k; i++){
        ans = minheap.top();
        minheap.pop();
    }

    return ans;
    
}

int main(){

    vector<int>num1 = {-2,-1,0,1,2};
    vector<int>num2 = {-3,-1,2,4,5};
    long ans = kthSmallestProduct(num1 , num2 , 3);
    cout<<ans<<endl;

    return 0;
}