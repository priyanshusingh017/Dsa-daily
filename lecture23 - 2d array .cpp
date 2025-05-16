#include<iostream>
#include <bits/stdc++.h>

// linear visulazition of 2d array - c*i+j 
//where i is the row and j is the column
//c - no . of columns  ; r - no . of rows

// int arr[r][c] = {}; 
//cin>> arr[i][j]; 
// cout<<arr[i][j]; 

using namespace std;

bool ispresent(int arr[][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

void printrowsum(int arr[][4], int row, int col){

    cout<<"sum of each row -> "<<endl;

    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0 ; col<4;col++){
            sum += arr[row][col];
        }
        cout<<sum<<endl;
    }

}
void printcolsum(int arr[][4], int row, int col){

    cout<<"sum of each column -> "<<endl;
    
    for(int col=0; col<4; col++){
        int sum=0;
        for(int row=0 ; row<3;row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;

}

void largestrowsum(int arr[][4], int row, int col){

    int maxsum = INT_MIN;
    int rowindex = -1;

    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0 ; col<4;col++){
            sum += arr[row][col];
        }
        if(sum > maxsum){
            maxsum = sum;
            rowindex = row;
        }
        
    }
    cout<<"maximum sum "<<maxsum<<endl;
    cout<<"row index "<<rowindex<<endl;
    
} 

int main(){

    // 2d array -> 3 rows and 4 columns

    int arr[3][4]; 

    //int arr[3][4] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12}; 
    //int arr[3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 122}}; 


    cout<<"enter the elements of the 2d array -> "<<endl;

    // input rows wise -> 
    for(int row=0; row<3; row++){
        for(int col=0 ; col<4;col++){
            cin>>arr[row][col];
        }
    }

 /*
    // input column wise -> 
    for(int col=0; col<4; col++){
        for(int row=0 ; row<3;row++){
            cin>>arr[row][col];
        }
    }
 */

    // printing the 2d array ->

    cout<< " printing the 2d array -> "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0 ; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    /* cout<<"enter the element to be searched -> ";
    int target;
    cin>>target;

    // searching the element in the 2d array

    if (ispresent(arr, 3, 4, target)){
        cout<<"element found"<<endl;
    } 
    else{
        cout<<"element not found"<<endl;
    }
        */

    printrowsum(arr, 3, 4); // sum of each row
    printcolsum(arr, 3, 4); // sum of each column
    
    largestrowsum(arr, 3, 4); // largest sum of each row

    

    return 0;

}