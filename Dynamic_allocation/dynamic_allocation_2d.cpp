#include<iostream>
using namespace std;

int main(){

    /*
       int arr[5][5] -> 5 rows and 5 column created manullay. 

       2d - array =>  int ** arr = new * int[n];

    */
   /* // -> square matrix 
   int n;
   cin>>n;
   int ** arr = new int *[n];
 
   //creation -> 
   for(int i=0; i<n; i++){
       arr[i]=new int[n];
       // creation done 
   }
 
   // taking input -> 
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           cin>>arr[i][j];
       }
   }
 
   //output ->
   cout<<endl;
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           cout<<arr[i][j]<<" ";
       }cout<<endl;
   }
   */

   // 2d array -> rectangle 

   int row;
   cin>>row;

   int col;
   cin>>col;

    int ** arr = new int *[row];

    //creation ->
    for(int i=0; i<row; i++){
        arr[i]=new int[col]; // input of col ; 
       // creation done 
    }
 
   // taking input -> 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
 
   //output ->
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // when we create a heap memory we have to clean the memory too.

    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete [] arr;

    // hw -> jaggered array ; -> dynamic memory 

    return 0;
}