#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &prices)
{

    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i - 1])
        {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

int main()
{
    vector<int> prices = {1, 5, 3, 8, 12};
    cout << maximumProfit(prices) << endl;

    return 0;
}