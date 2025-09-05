#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int maximumProfit(vector<int> &prices) {
        
        int minprices = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<minprices){
                minprices =prices[i];
            }
            else{
                int profit_i = prices[i]-minprices;
                profit = max(profit , profit_i);
            }
        }
        
        return profit;
    }

int main(){

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maximumProfit(prices) << endl; // 5 

    return 0;
}