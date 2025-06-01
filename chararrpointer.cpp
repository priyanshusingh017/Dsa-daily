#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<*p<<endl; // prints the value stored in pointer p
}
void update(int *p){
    //p=p+1; 
    // cout<<"inside "<<p<<endl;
    *p = *p + 1; // increments the value at the address stored in pointer p by 1
}

int getsum(int arr[] , int n){

    // cout<<"size of arr is: "<<sizeof(arr)<<endl; // prints size of pointer to array, not the size of the array
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += i[arr]; // adds each element of the array to sum
    }
    return sum; // returns the total sum of the array elements
}

int main() {

    /*

    int arr[5]={1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl; // prints address of first element of array

    cout<<ch<<endl; // prints the string stored in char array

    char *ptr = &ch[0]; // pointer to first element of char array
    // prints entire string stored in char array
    cout<<ptr<<endl; 

    cout<<*ptr<<endl; // prints the first character of char array

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl; // prints the string stored in 


    int value = 5;
    int *p1 = &value; // pointer to integer value

    print(p1); // prints the address stored in pointer p1

    cout<<"before "<< *p1 << endl; // 

    update(p1); // updates the pointer p1 to point to next element

    cout<<"after "<< *p1 <<endl; 
    */

    int arr[10]={1,2,3,4,5,8};
    cout<<"sum is : "<< getsum(arr+3, 3) << endl; 

   




    return 0;

}