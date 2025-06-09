#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// missing numer -> like missing 1 no. 
int missingNumber(vector<int> &arr) {

    sort(arr.begin() , arr.end());
    int j=1;
    for(int i=0 ; i<arr.size(); i++){
        if(arr[i]>0){
            if(arr[i]==j){
                j++;
            }
        }
    }
    return j;
}

// disappernumbers -> in (1,n)
vector<int> findDisappearedNumbers(vector<int> &arr) {
    int n = arr.size();
    unordered_set<int>seen(arr.begin() , arr.end());
    /*for(auto num : arr){
        seen.insert(num);
    }*/
    vector<int>missing;
    for(int i=1 ; i<=n; i++){
        if(!seen.count(i)){ // -> seen.find(i)==seen.end()
            missing.push_back(i);
        }
    }
    return missing;

}

int main(){

    vector<int> arr = {4,3,2,7,8,2,3,1};
    int num = missingNumber(arr);
    cout<<num<<endl;

    vector<int> arr2 = {4,3,2,7,8,2,3,1};
    vector<int> seen1 = findDisappearedNumbers(arr2);
    for(auto it : seen1){
        cout<<it<<" ";
    }



    return 0;
}