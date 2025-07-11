#include<iostream>
using namespace std;

int getsum (int * arr  , int n){

    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}


int main(){


/*
int n;
cin>>n;
int arr[n] -> size of array is defined at time of runtime .
// so it is a bad practice .
*/

// when we have to use new keyword; 
// => new char; -> dynamic memory allocation; return address
// char * char = new char ;  -> using pointer we access the address's values

// in * i => store in store where new int store in heap memory 

// array -> int * arr =  new int [5]; 8 + 5*4 = 28

    /*
    char c = 'q';
    cout<<sizeof(c)<<endl; // 1

    char * ch = &c;
    cout<< sizeof(ch)<<endl; // 8
    */

    // arr[i] = * (arr +i);

    int n;
    cin>>n;

    //varibale size array 
    int * arr = new int [n];

    //taking input -> 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<getsum(arr , n)<<endl;

    // differrence in static or dynamic -> 
    /*
       int arr[50]; -> stack memory => 200 memory size 
       int * arr = new int [50]; -> heap memoery  -> 8 + 4*50 = 200 

       difference in memory allocation . 

       // case -1 
       while(true){
        int i=5; -> allocate inside when reach outside ut realease the memory 
       }

       // case -2 
       while(true){
        int * p = new int ; -> in stack in relase the memory but in dynamic aloaction it reloadthe memory ;
       }

       // in stack memory auto delete but not in dynamic momery it can done by manully;
       // use delete keyword;


       int * arr = new int[50];
       delete [] arr ; -> arr delete ;

       int * i = new int;
       delete i; -> integer delete ;
    */


    return 0;
}