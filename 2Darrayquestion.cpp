#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> waveprint(int arr[][4], int nrow, int mcol){

    vector<int> ans;

    for(int col=0; col<mcol; col++){
        if(col&1){
            //odd index -> bottom to top
            for(int row=nrow-1 ; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //even index -> top to bottom
            for(int row=0; row<nrow ; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }

    return ans;
}

vector<int> spiralorder(vector<vector<int>> &matrix){

    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;

    int count =0;
    int total = row*col;

    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row-1;
    int endingcol = col-1;

    while(count < total){

        // starting row
        for(int index = startingcol; count < total && index<=endingcol; index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        // ending column
        for(int index = startingrow; count < total && index<=endingrow; index++){
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;

        // ending row
        for(int index = endingcol; count < total && index>=startingcol; index--){
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;

        // starting column

        for(int index = endingrow; count < total && index>=startingrow; index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}

//binary search in 2d array -> 

// search in row wise and column wise sorted array

bool binarysearch(vector <vector<int>> &matrix, int target){
    
    int row = matrix.size();
    int col = matrix[0].size();

    int start =0 ;
    int end= row*col -1;

    int mid = start + (end-start)/2;

    while(start<=end){

        int element = matrix[mid/col][mid%col];
        // mid/col gives the row index  - > quotient
        // mid%col gives the column index -> remainder

        if(element == target){
            return true;
        }
        else if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}

// search in row wise and column wise unsorted array

bool searchinrowcolsorted(vector<vector<int>> &matrix, int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int rowindex = 0;
    int colindex = col - 1;

    while(rowindex < row && colindex >= 0){
        if(matrix[rowindex][colindex] == target){
            return true;
        }
        else if(matrix[rowindex][colindex] > target){
            colindex--;
        }
        else{
            rowindex++;
        }
    }
    return false;
}

int main(){

    int arr[3][4];

    cout<<"enter the elements of the 2d array -> "<<endl;

    // input rows wise -> 
    for(int row=0; row<3; row++){
        for(int col=0 ; col<4;col++){
            cin>>arr[row][col];
        }
    }

    // printing the 2d array ->

    cout<< " printing the 2d array -> "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0 ; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

   
    // wave print of the array
    vector<int> ans = waveprint(arr, 3, 4); 
    cout<<"wave print of the array -> "<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }cout<<endl;
    

    // spiral print of the array
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> spiral = spiralorder(matrix);
    cout<<"spiral order of the matrix -> "<<endl;
    for(auto i: spiral){
        cout<<i<<" ";
    }cout<<endl;

  

     // binary search in 2d array
    vector<vector<int>> matrix2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    
    if(binarysearch(matrix2, 10)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    // search in row wise and column wise unsorted array
    vector<vector<int>> matrix1 = {{10, 20, 30}, {15, 25, 35}, {27, 29, 37}};
    if(searchinrowcolsorted(matrix1, 29)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }


    return 0;
}