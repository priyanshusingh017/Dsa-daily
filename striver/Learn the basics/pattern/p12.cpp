#include<iostream>
using namespace std;

/*
 Pattern to print:
 1        1
 12      21
 123    321
 1234  4321
 1234554321
*/

int main(){

    int space = 2*(5-1);

    for(int i=1; i<=5; i++){
        
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        // space 
        for(int j=1; j<space; j++)
        {
            cout<<" ";
        }

        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;

        space -= 2;

    }

    return 0;
}