#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int happyneighbors(int n , int m , vector<int>& nums){
    vector<int>filled(n+1 , 0);
    for(int i=0; i<n; i++){
        filled[nums[i]]=1;
        int count=0;
        for(int j=1 ; j<=n; j++){
            if(filled[j]==1){
                count++;
                if(count>=m){
                    return i+1;
                }
            }
            else{
                count=0;
            }
        }
    }
    return -1;
}


int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>nums;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    cout<<happyneighbors(n,m,nums)<<endl;

    return 0;
}