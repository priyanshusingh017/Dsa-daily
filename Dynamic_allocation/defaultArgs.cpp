#include<iostream>
using namespace std;
void print(int arr[] , int n , int start=0){
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    /*
      Default Argument ->
      
      A default argument is a value provided in a function declaration that is automatically assigned by the compiler 
       if the caller of the function does not provide a value for that argument.
      In the function 'print', the parameter 'start' has a default value of 0.
      So, if 'print' is called with only two arguments, 'start' will be 0 by default.

    */

    int arr[5] = {1,4,7,8,9};

    print( arr , 5 );
    cout<<endl;
    print(arr,5,2);

    // hw - constant variable;


    return 0;
}