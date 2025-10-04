#include<iostream>
using namespace std;

/*
    Pattern:
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
*/

int main(){

    for(int i=1; i<=5; i++){

        // space 
        for(int j=0; j<=5-i; j++){
            cout<<" ";
        }

        // characters: print 'A', then 'B', then 'A' (ABA), increase pattern as per row
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        for(char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            if(i > 1) cout << ch;
        }
        cout << endl;
    }

    return 0;
}