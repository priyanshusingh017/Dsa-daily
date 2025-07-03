#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isbeautifulnumber(int number){
    string nums = to_string(number);
    unordered_map<char , int>digits;
    for(auto num : nums){
        digits[num]++;
    }
    for(auto i : digits){
        int numbers =  i.first  - '0';
        int count = i.second;
        if(numbers != count){
            return false;
        }
    }
    return true;
}

int nextbeautiful(int limit){
    int next = limit+1;
    int number = 0;

    while(true){
        if(isbeautifulnumber(next)){
            number = next;
            break;
        }
        next++;
    }
    return number;
}

int  main(){

    cout<<nextbeautiful(250)<<endl;
    return  0;
}