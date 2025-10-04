#include<iostream>
using namespace std;

/*
Pattern 14 :
A 
A B 
A B C 
A B C D 
A B C D E 
*/

int main(){

    for(int i=1; i<=5; i++){
        for(char ch = 'A'; ch<'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}