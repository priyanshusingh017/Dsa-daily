#include<iostream>
using namespace std;

double myPow(double x , int n){

    //handle edge case ->
    if(n==INT_MIN){
        return (x*x , n/2);
    }

    //base edge ->
    if(n==0) return 1;
    if(n==1) return x;

    // even power -> n => even power -> return {(x^n/2) * (x*n/2)};
    // odd power -> n => odd power  -> return {x*(x^n/2) * (x^n/2)};

    if(n<0){
        x = 1/x;
        n = -n;
    }

    int ans = myPow(x , n/2);

    if(n&1){
        return x*(ans*ans);
    }
    else{
        return (ans*ans);
    }
}

int main(){

    double x;
    cin>>x;

    int n;
    cin>>n;

    cout<<myPow(x,n);

    return 0;
}