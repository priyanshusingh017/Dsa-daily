#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string clearDigits(string s) {
    vector<char>stack;
    for(auto num : s){
        if(isdigit(num)){ // use to indentiy wheather is num or not -> 
            if(!stack.empty() && isalpha(stack.back())){ // isalpha -> It checks if the given character is an alphabetic letter (a-z or A-Z).
                stack.pop_back();
            }
        }
        else{
            stack.push_back(num);
        }
    }
    // after that -> print all thing in string format -> 
    return string(stack.begin(), stack.end());
}

int main(){
    string s ="cb34"; // -> gives ""
    string s1 = "abc3"; // -> gives -> ab
    string result = clearDigits(s);
    string res = clearDigits(s1);
    cout<<res<<endl;
    cout<<result<<endl;
    return 0;
}
