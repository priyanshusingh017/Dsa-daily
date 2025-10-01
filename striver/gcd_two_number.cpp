#include<iostream>
using namespace std;

int gcd_two_number(int a , int b){
    // a>b
    if(b==0) return a;
    return gcd_two_number(b,a%b);


    /*
      GCD - gcd( 50 , 12 )

      steps :- 
      1. a = 50 , b = 12 
      2. a = 12 , b = 2 ( 50 mod 12 = 2 )
      3. a = 2  , b = 0 ( 12 mod 2 = 0 )
      4. return a = 2   ( b= 0 then gives a = 2 )

    */
}

int main(){

    int a , b ;
    cout << "Enter of the numbers : " ;
    cin>> a >> b ;
    cout << "GCD of " << a << " and " << b << " is : " <<gcd_two_number(a,b)<<endl;

    return 0;
}