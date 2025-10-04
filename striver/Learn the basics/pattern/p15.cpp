#include<iostream>
using namespace std;

/*
 Pattern 15 :
 A B C D E 
 A B C D 
 A B C 
 A B 
 A 
*/

int main(){

    for(int i=5; i>=0; i--){
        for(char ch='A'; ch<'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}