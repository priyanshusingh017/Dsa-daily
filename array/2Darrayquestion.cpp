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

// 90 degree rotation of the matrix
void rotate(vector<vector<int>>& matrix){

    int n = matrix.size();

    //tranpose the matrix
    for(int i = 0 ;i<n; i++){
        for(int j = i ; j<n ; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    //reverse the matrix
    for(int i = 0 ; i<n ; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

//Determine Whether Matrix Can Be Obtained By Rotation
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n = mat.size();
    for (int i = 0; i <4; i++) {
        if (mat == target) {
            return true;
        }
        rotate(mat);
    }
    return false;
}

//types of triangle
string triangleType(vector<int>& nums){
    int a = nums[0];
    int b = nums[1];
    int c = nums[2];

    // check if the sides form a valid triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        return "none";
    }

    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        return "right-angle triangle";
    }
    else if(a==b && b==c){
        return "equilateral";
    }
    else if (a==b || b==c || c==a){
        return "isosceles";
    }
    else{
        return "scalene";
    }
}

// diagonal traversal 

vector<int> diagonaltraversal(vector<vector<int>>& matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    map<int , vector<int>>diagonal;

    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<m; j++){
            diagonal[i+j].push_back(matrix[i][j]);
        }
    }

    vector<int>ans;

    for(auto& entry : diagonal){
        vector<int>& diagonals = entry.second;

        //reverse 
        if(entry.first % 2 == 0){
            reverse(diagonals.begin() , diagonals.end());
        }

        // ans.insert(ans.end(), diagonals.begin(), diagonals.end());

        for(int i=0; i<diagonals.size(); i++){
            ans.push_back(diagonals[i]);
        }
    }

    return ans;
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
    cout<<endl;

    // printing the 2d array ->

    cout<< " printing the 2d array -> "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0 ; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // wave print of the array
    vector<int> ans = waveprint(arr, 3, 4); 
    cout<<"wave print of the array -> "<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }cout<<endl;
    cout<<endl;
    
    // spiral print of the array
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> spiral = spiralorder(matrix);
    cout<<"spiral order of the matrix -> "<<endl;
    for(auto i: spiral){
        cout<<i<<" ";
    }cout<<endl;
    cout<<endl;

    // binary search in 2d array
    vector<vector<int>> matrix2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    cout<<"binary search in 2d array -> "<<endl;
    if(binarysearch(matrix2, 10)){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    cout<<endl;

    // search in row wise and column wise unsorted array
    vector<vector<int>> matrix1 = {{10, 20, 30}, {15, 25, 35}, {27, 29, 37}};
    cout<<"search in row wise and column wise unsorted array -> "<<endl;
    if(searchinrowcolsorted(matrix1, 29)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    cout<<endl;

    // 90 degree rotation of the matrix
    vector<vector<int>> matrix3 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    cout<<"original matrix -> "<<endl;
    for(int i = 0 ; i<matrix3.size(); i++){
        for(int j = 0 ; j<matrix3[0].size(); j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(matrix3);
    cout<<"90 degree rotation of the matrix -> "<<endl;
    for(int i = 0 ; i<matrix3.size(); i++){
        for(int j = 0 ; j<matrix3[0].size(); j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Determine Whether Matrix Can Be Obtained By Rotation - 180 degree
    vector<vector<int>> mat = {{0 , 0 , 0 } , {0 , 1 , 0} , {1 , 1 , 1}};
    vector<vector<int>> target = {{1 , 1 , 1} , {0 , 1 , 0} , {0 , 0 , 0}};
    if(findRotation(mat, target)){
        cout<<"matrix can be obtained by rotation"<<endl;
    }
    else{
        cout<<"matrix cannot be obtained by rotation"<<endl;
    }
    cout<<endl;

    // types of triangle - none, right-angle triangle, equilateral, isosceles, scalene
    vector<int> nums = {3, 4, 5};
    vector<int> nums1 = {3, 3, 3};
    string result = triangleType(nums);
    string result1 = triangleType(nums1);
    cout << "The triangle is: " << result << endl;
    cout << "The triangle is: " << result1 << endl;
    cout<<endl;

    //diagonal traversal 
    vector<vector<int>> matrix4 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<"original matrix -> "<<endl;
    for(int i = 0 ; i<matrix4.size(); i++){
        for(int j = 0 ; j<matrix4[0].size(); j++){
            cout<<matrix4[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> diagonal = diagonaltraversal(matrix4);
    cout<<"diagonal traversal of the matrix -> "<<endl;
    for(auto i: diagonal){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}