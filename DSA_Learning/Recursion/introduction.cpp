#include<iostream>
using namespace std;

int factorial(int n){

    if(n<=1) return 1; 
    
    // to protect from segmentation fault ( stack overflow ) we use base case .

    /*
     int smallerproblem = factorial(n-1);
     int badiproblem = n * smallerproblem;
     return badiproblem;
    */

    return n*factorial(n-1);
}

int power2(int n){

    if(n==0) return 1;

    return 2 * power2(n-1);
}

void printcounting (int n){
    
    if(n==0){
        return ;
    }

    // -> head recursion ->  
    // cout<<n<<" "; // 5 , 4 , 3 , 2 , 1 
    
    printcounting(n-1);

    //tail recursion
    cout<<n<<" "; // 1 , 2 , 3 , 4 , 5

}

int main(){

    /*
     Recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller subproblems.
     
     // Example: Factorial using recursion
        int factorial(int n) {
           if (n <= 1) return 1;
            return n * factorial(n - 1);
        }
        cout << "Factorial of 5 is " << factorial(5) << endl;

        // example of 2^n => func(n) = 2* func(n-1); => recursive function

    */

    int n;
    cin>>n;

    cout<<factorial(n)<<endl; // if 5 -> 120 

    cout<<power2(n)<<endl; // n=5 -> 32 

    printcounting(n); 

    return 0;
}