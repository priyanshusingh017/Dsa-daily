#include<iostream>
using namespace std;

bool checkpalindrome(string str , int i , int j){

    //base case 
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkpalindrome(str , i+1 , j-1);
    }

}

int main(){

    string name = "aabbaa";
    cout<<checkpalindrome(name , 0 , name.size()-1);

    return 0;
}