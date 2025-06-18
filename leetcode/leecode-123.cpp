#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// leetcode-123 - at most two transactions

int maxprofit(vector<int>&prices){
    int buy1=INT_MAX , sell=0;
    int buy2 = INT_MAX , sell2=0;

    for(int i=0; i<prices.size(); i++){
        buy1=min(buy1 , prices[i]);
        sell = max(sell , prices[i]-buy1);
        buy2=min(buy2 , prices[i]-sell);
        sell2 = max(sell2 , prices[i]-buy2);
    }
    return sell2;

}



int main(){

    vector<int> prices = {3,3,5,0,0,3,1,4};
    cout<<maxprofit(prices)<<endl;



    return 0;
}