#include <bits/stdc++.h>
using namespace std;


int duplicate(vector<string>&name , vector<int>prices , vector<int>weight){

    int ans=0;
    unordered_set<string>ch;
    for(int i=0; i<name.size(); i++){
        string id = name[i]+"_"+to_string(prices[i])+"_"+to_string(weight[i]);
        if(ch.count(id)){
            ans++;
        }
        ch.insert(id);
    }
    return ans;
}


int main(){
    vector<string> name = {"apple", "banana", "apple", "apple"};
    vector<int> prices = {10, 20, 10, 10};
    vector<int> weight = {1, 2, 1, 1};

    int result = duplicate(name, prices, weight);
    cout << "Number of duplicates: " << result << endl;

    return 0;
}
