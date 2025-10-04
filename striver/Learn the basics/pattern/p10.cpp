#include<iostream>
using namespace std;

/*
Pattern 10 - 
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
*/

int main(){

    // right angle triangle 
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //reverse order
    for(int i=4; i>=0; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}