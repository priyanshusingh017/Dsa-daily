#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&str , int count , int n){

    //basecase 
    if(count== n/2){
        str.pop();
        return;
    }

    int num = str.top();
    str.pop();

    //recursive call
    solve(str , count+1 , n);

    str.push(num);
}

void deleteMiddle(stack<int>&str , int n){

    int count =0; 
    solve(str , count , n);
}

int main(){

    stack<int>s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    deleteMiddle(s , 5);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}