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

//printing the elements

void printElements(const vector<int>& elements) {
    for (int i = 0; i < elements.size(); ++i) {
        cout << elements[i] << " ";
    }
    cout << endl;
}


int main(){


    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    
    vector<int> result = findMajority(arr);
    
    cout << "Majority Elements: ";
    printElements(result);


    return 0;
    
}
