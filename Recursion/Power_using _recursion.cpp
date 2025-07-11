#include<iostream>
using namespace std;

/*
   (a)^b = if b is even = (a)^b/2 * (a)^b/2;
   (a)^b = if b is odd = (a){(a)^b/2 * (a)^b/2};
*/

long long power(long long a , long long b){

    //base case 
    if(b == 0) return 1;
    if(b == 1) return a;

    long long  ans = power( a , b/2);

    // b is odd
    if(b&1){
        return a * ans * ans;
    }
    // b is even 
    else{
        return ans * ans;
    }
}


int main(){
    
    long long  a , b;
    cin>> a >> b;

    cout<<power(a,b)<<endl;

    return 0;
}