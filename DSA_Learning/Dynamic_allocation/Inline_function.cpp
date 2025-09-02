#include<iostream>
using namespace std;

void func(int a , int b){
    a++;
    b++;
    cout<< a << b <<endl;
}

inline int getmax(int a , int b){
    return (a>b) ? a : b;
}

int main(){

    /*
     // Inline function  are used to reduce the function calls overload .
     example 
     inline int add(int a, int b) {
        return a + b;
     }
 
     int x = 5, y = 10;
     cout << "Sum: " << add(x, y) << endl;
    */

    int a = 1, b=2;
    cout<<getmax(a,b)<<endl;

    a =a+3;
    b =b+1;

    cout<<getmax(a,b)<<endl;
    

    return 0;
}