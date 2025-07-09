#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
    sort(nums.begin() , nums.end());
    for(int i=0; i<nums.size()-1; i++){
        for(int j=i+1; j<nums.size(); j++){
            if(abs(i-j)<=indexDiff && abs(nums[i] - nums[j])<= valueDiff){
                return true;
            }
        }
    }
    return false;
}

bool containsNearbyAlmostDuplicate1(vector<int>& nums, int indexDiff, int valueDiff) {

    int n = nums.size();
    unordered_set<int>set;
    for(int i=0; i<n; i++){
        if(i>indexDiff){
            set.erase(set.find(nums[i-indexDiff-1]));
        }
        for(auto num: set){
            if(abs(num - nums[i]) <= valueDiff){
                return true;
            }
        }
        set.insert(nums[i]);
    }
    return false;
}

bool containsNearbyAlmostDuplicate2(vector<int>& nums, int indexDiff, int valueDiff) {

    int n = nums.size();
    set<long>set;
    for(int i=0; i<n; i++){
        if(i>indexDiff){
            set.erase(set.find(nums[i-indexDiff-1]));
        }
        auto it = set.lower_bound(nums[i]- valueDiff);
        if(it != set.end() && abs(*it - nums[i])<=  valueDiff){
            return true;
        }
        set.insert(nums[i]);
    }
    return false;
}

bool containsNearbyAlmostDuplicate3(vector<int>& nums, int indexDiff, int valueDiff) {
    
    if(nums.size()==1e5) return false;
    vector<pair<int, int>>s; //vector-pair
    for(int i=0; i<nums.size(); i++){
        s.push_back({nums[i] , i});
    }
    sort(s.begin(), s.end());

    for(int i=0; i<s.size()-1; i++){
        for(int j=i+1; j<s.size(); j++){
            if(abs(s[i].first - s[j].first)<=valueDiff && abs(s[i].second - s[j].second ) <= indexDiff){
                return true;
            }
            if(abs(s[i].first - s[j].first)>=valueDiff) break;
        }
    }
    return false;
}


int main(){

    vector<int>nums ={1,2,3,1};
    cout<< containsNearbyAlmostDuplicate3(nums , 3 , 0)<<endl;
    vector<int>nums1 = {1,5,9,1,5,9};
    cout<<containsNearbyAlmostDuplicate3(nums1 , 2 , 3)<<endl;
    vector<int>nums2 = {8,7,15,1,6,1,9,15};
    cout<<containsNearbyAlmostDuplicate3(nums2 , 1 , 3)<<endl;


    return 0;
}