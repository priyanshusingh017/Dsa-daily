#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int minsubarraysize(vector<int>&nums , int target){

    int l=0; 
    int sum=0;
    int minlen = INT_MAX;
    for(int r=0; r<nums.size(); r++){
        sum += nums[r];
        while(sum>=target){
            minlen = min(minlen , r-l+1);
            sum -= nums[l];
            l++;
        }
    }

    return minlen;
}

vector<int>prasearray(string s){
    vector<int>nums;
    string str = " ";
    for(auto c : s){
        if(isdigit(c)){
            str += c; // when get digit the add to str 
        }
        else if(str != " "){
            nums.push_back(stoi(str)); // [ -> ignore but add 2 its push to nums and again made str =" " and continue work as , -> to 
            str = " ";
        }
    }

    if(str != " "){
        nums.push_back(stoi(str)); // -> add last element if exists 
    }

    return nums;
}


int main(){

    int target;
    cin>>target;

    string dumppy;
    getline(cin , dumppy); // ingore the newline 
    
    string s;
    getline(cin , s); // cin all value -> as [2,1,3,2,4,3]
 
    vector<int>nums = prasearray(s); // string to prase into vector 

    cout<<minsubarraysize(nums , target); // clac. as asual 



    return 0;
}

// explaination 

/* input format -> 
7
[2,1,3,2,4,3] => 2 {[4,3]}

1. Reading Input

cin >> target reads 7 into target

getline(cin, dummy) consumes the newline after 7

getline(cin, s) reads "[2,1,4,2,4,3}" into string s

2. Parsing the Array

parseArrayInput(s) processes the string:

Scans each character: '[', '2', ',', '1', etc.

When it finds digits ('2'), it starts building numStr = "2"

At ',', it pushes 2 to nums and resets numStr

Continues until the end, resulting in nums = [2,1,4,2,4,3]

*/