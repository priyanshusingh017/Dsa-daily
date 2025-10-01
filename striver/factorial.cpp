#include<iostream>
using namespace std;

// using recursion method - 
long long factorial (long long n ){

    // base condition -> 
    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}

// using iterative method - 

int factorial1( int n ){ 

    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    }

    return ans;
}

int main(){

    long x;
    cout<<"Enter the number for factorial :- ";
    cin>>x;

    cout<<"Factorial of "<< x << " is :- "<< factorial(x)<<endl;
    cout<<"Factorial of "<< x << " is :- "<< factorial1(x)<<endl;

    return 0;
}