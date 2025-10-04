#include<iostream>
using namespace std;

/*
 Prints the following pattern:

 *********
  *******
   *****
    ***
     *
*/

int main(){

    for(int i=5; i>=0; i--){

        //space 
        for(int j=1; j<=5-i; j++){
            cout<<" ";
        }

        // star
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}