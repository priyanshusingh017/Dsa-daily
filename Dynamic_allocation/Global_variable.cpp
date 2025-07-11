#include<iostream>
using namespace std;

int score = 15;

void a(int& i){

    cout<< score << " in a "<<endl;

    char ch = 'a';
    cout<<i<<endl;
    //b(i);
}

void b(int & i){

    cout<< score << " in b "<<endl; 

    cout<<i<<endl;
}

int main(){

    /*
      Global variable ->  
      A global variable is a variable that is declared outside of all functions and is accessible from any function within the same file.
      Example:
      int globalVar = 10;
      Global variables should be used sparingly, as they can make code harder to maintain and debug.
    
      also can share using refence variable but it is very bad practice .
    */

    cout<< score << " in main "<<endl;
    int i=5; 
    a(i);
    b(i);
    //a(i);

    {
        int i=2;
        cout<<i<<endl;
    }

    cout<<i<<endl;

    return 0;
}