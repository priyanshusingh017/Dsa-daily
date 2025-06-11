#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxDifference(string s, int k){ // not optimal solution, O(n^3) complexity

    int maxDiff = INT_MIN , n=s.size();
    for(int i=0; i<n-k; i++){
        for(int j=i+k; j<=n; j++){
            string subs = s.substr(i , j-i);
            unordered_map<char, int> freq;
            for(auto c : subs){
                freq[c]++;
            }
            int oddsum = 0, evensum = INT_MAX;
            bool hasodd = false, haseven = false;
            for(const auto& it : freq){
                if((it.second) & 1){
                    hasodd = true;
                    oddsum = max(oddsum, it.second);
                }
                else{
                    haseven = true;
                    evensum = min(evensum, it.second);
                }
            }
            if(hasodd && haseven){
                maxDiff = max(maxDiff, oddsum - evensum);
            }
        }
    }
    return maxDiff==INT_MIN ? -1 : maxDiff; // If no valid difference found, return -1
}




int main(){

    string s = "1122211"; // 1
    string s1 = "12233"; // -1
    string s2 = "44114402" ; // -1
    cout<<maxDifference(s, 3)<<endl;
    cout<<maxDifference(s1, 4)<<endl;
    cout<<maxDifference(s2, 7)<<endl;

    return 0;
}