#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
       int deficit =0;
       int balance =0;
       int start=0;

       for(int i=0; i<gas.size(); i++){
        balance += gas[i] - cost[i];
        if (balance < 0) {
          deficit += balance;
          start = i + 1;
          balance = 0;
        }
       }
       if (balance + deficit >= 0)
         return start < gas.size() ? start : -1;
       else
         return -1;
    }
};
int main() {
  vector<int> gas = {4, 5, 7, 4};
  vector<int> cost = {6, 6, 3, 5};
  Solution sol;
  int result = sol.startStation(gas, cost);
  cout << "Start station index: " << result << endl;
  return 0;
}

