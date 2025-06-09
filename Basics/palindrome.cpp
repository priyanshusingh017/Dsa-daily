#include<iostream>
using namespace std;


bool palindrome(int n){
    int temp=n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    if(temp==reverse){
        return true;
    }else{
        return false;
    }
}

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(palindrome(n)){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not a palindrome"<<endl;
    }
    
    return 0;
}