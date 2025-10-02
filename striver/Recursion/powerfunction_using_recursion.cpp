#include<iostream>
using namespace std;

/*
 Basic to know -> ( a^b )  

 if b is even => a^b/2 * a^b/2 ;
 example - 2^4 => 2^2 * 2^2 ;

 if b is odd =>  a{(a^b/2 * a^b/2)};
 example - 2^3 => 2(2^1 * 2^1);

*/

double powerfunction(double a , int b){

    // handle the edge case-
    if(b==INT_MIN){
        return powerfunction(a*a , b/2);
    }

    // base case 
    if(b==0) return 1;
    if(b==1) return a;

    // handle the negative case -
    if(b<0){
        a = 1/a;
        b=-b;
    }

    double ans = powerfunction(a, b/2);

    // b is odd ->
    if(b&1){
        return a * ans * ans;
    }
    // b is even 
    else{
        return ans * ans;
    }
}

int main(){
    double a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    cout << a << "^" << b << " = " << powerfunction(a, b) << endl;

    return 0;
}