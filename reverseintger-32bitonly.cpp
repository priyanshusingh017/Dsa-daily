#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int x){

    int rev =0;
    while(x!=0){
        int digit = x%10;
        x/=10;

        //check the condition for overflow and underflow - 32 bit integer 

        if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7)) return 0;
        if(rev<INT_MIN/10 || (rev==INT_MIN/10 && digit<-8)) return 0;

        rev = rev *10 + digit ;
    }
    return rev;
}

int main(){

    int x;
    cout<<"enter the number"<<endl;
    cin>>x;

    int ans=reverse(x);
    if(ans==0){
        cout<<"overflow or underflow"<<endl;
        return 0;
    }
    else{
        cout<<"reversed number is : "<<ans<<endl;
    }

    return 0;
}