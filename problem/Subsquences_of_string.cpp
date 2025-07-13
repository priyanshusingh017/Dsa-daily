#include<iostream>
#include<vector>
using namespace std;

// Sub-sequences_of_string means that we find the all set of subsets of strings.

void solve (string str , string output , int index , vector<string>&ans){

    //base case 
    if(index >= str.size()){
        if(output.size() > 0){
            ans.push_back(output);
        }
        return ;
    }

    //exclude
    solve(str , output , index+1 , ans);

    //include
    char element = str[index];
    output.push_back(element);
    solve(str , output , index+1 , ans);

}

vector<string> subsequences(string str){

    vector<string> ans;
    string output = "";
    int index =0;
    solve(str , output , index , ans);
    return ans;
}

int main(){

    string str = "abc";
    vector<string>res = subsequences(str);
    for(auto i:res){
        cout<<i<<" ";
    }

    return 0;
}