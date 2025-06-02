#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int candy(vector<int>& ratings) {
    int n = ratings.size();
    vector<int> candies(n, 1); 
    for(int i=1; i<n; i++){
        if(ratings[i] > ratings[i-1]) {
            candies[i] = candies[i-1] + 1;
        }
    }
    for(int i=n-2; i>=0; i--) {
        if(ratings[i] > ratings[i+1]) {
            candies[i] = max(candies[i], candies[i+1] + 1);
        }
    }
    int totalCandies = 0;
    for(auto &c : candies) {
        cout << c << " "; // Print the candies distribution for debugging
        totalCandies += c;
    }
    return totalCandies;

}



int main(){
    vector<int> ratings = {1,2,87,87,87,2,1};
    cout << "Minimum candies required: " << candy(ratings) << endl;
    // Output: Minimum candies required: 5
    // Explanation: The distribution [2, 1, 2] satisfies the conditions.
    // Each child has at least one candy, and children with a higher rating get more candies than their neighbors.
    // The first child has a rating of 1, so they get 2 candies.
    // The second child has a rating of 0, so they get 1 candy.
    // The third child has a rating of 2, so they get 2 candies.
    // The total number of candies is 2 + 1 + 2 = 5.
    // The output is 5, which is the minimum number of candies required to satisfy the conditions.


    return 0; 
}