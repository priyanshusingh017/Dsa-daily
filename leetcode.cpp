#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

//188 - pascals triangle

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> triangle;

    for(int i = 0; i<numRows; i++ ){
        vector<int> rows(i+1 , 1); // starts with 1's

        for(int j=1 ; j<i ; j++){
            rows[j]= triangle[i-1][j-1] + triangle[i-1][j]; 
        }

        triangle.push_back(rows);
    }

    return triangle ;
    
}

// 119. Pascal's Triangle II

vector<int> getRow(int rowIndex) {
        
    vector<int> rows(rowIndex+1 , 1); // starts with 1's
    
    for(int i = 1; i<rowIndex; i++ ){
        for(int j=i ; j>0 ; j--){
            rows[j] += rows[j-1];
        }
    }

    return rows;
}

// majority element

int majorityElement(vector<int>& nums) {

    unordered_map<int , int>freq;

    for(auto num : nums){
        freq[num]++;
        
        if(freq[num]> nums.size()/2){
            return num;
        }

    }

    return -1 ;  
    
}

// 121. Best Time to Buy and Sell Stock

int maxProfit(vector<int>& prices) {

    int n = prices.size();

    int minprices = INT_MAX; 

    int profit = 0 ;

    for(int i = 0 ; i<n ; i++){

        if(prices[i]<minprices){
            minprices = prices[i];
        }
        else {
            profit = max(profit , prices[i]-minprices);
        }
    }

    return profit ; 
}

// min and max of an array
pair<int , int> minmax(vector<int>& arr){

    int a = INT_MIN;
    int b = INT_MAX;

    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i]<b){
            b = arr[i];
        }
        if(arr[i]>a){
            a = arr[i];
        }
    }

    return {b , a};
}

//set matrix zeroes
void setZeroes(vector<vector<int>>& matrix) {
    
    int n = matrix.size();
    int m = matrix[0].size();

    bool firstRowZero = false;
    bool firstColZero = false;

    // check if first col has any zero
    for(int i = 0 ; i<n; i++){
        if(matrix[i][0] == 0){
            firstColZero = true;
            break;
        }
    }
    // check if first row has any zero
    for(int j = 0 ; j<m; j++){
        if(matrix[0][j] == 0){
            firstRowZero = true;
            break;
        }
    }

    // mark the first row and first column
    for(int i = 1 ; i<n; i++){
        for(int j = 1 ; j<m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // set the matrix to zero based on the marks
    for(int i=1 ; i<n; i++){
        for(int j=1; j<m; j++){
            if(matrix[i][0] ==0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // set the first row to zero if needed
    if(firstRowZero){
        for(int j = 0 ; j<m; j++){
            matrix[0][j] = 0;
        }
    }

    // set the first column to zero if needed
    if(firstColZero){
        for(int i = 0 ; i<n; i++){
            matrix[i][0] = 0;
        }
    }
    
}

int main(){

    //problem 1 
    /*
     int n;
    cin>>n;
    int product =1;
    int sum=0;
    while(n!=0){

        int digit =n%10;
        product=product*digit;
        sum=sum+digit;
        n/=10;
    }
    int answer = product -sum;
    cout<<answer;
    */

   //problem 2

   /*int n;
   cin>>n;
   int count=0;
   while(n!=0){
    if (n&1){
       count++;
    }
    n=(n/10);
   }
   cout<<count;*/

//PROBLEM 3 

   /*int n;
   cin>>n;
   int answer=0;
   while(n!=0){
    int digit=n%10;
    if(answer>INT32_MAX/10 || answer<INT32_MIN/10){
        cout<<0;
    }
    answer=answer*10+digit;
    n=n/10;
   }
   cout<<answer;*/

    cout<<endl;

    /*// pascals triangle

    int numRows;
    cout<<"enter the number of rows"<<endl;
    cin>>numRows;
    vector<vector<int>> ans = generate(numRows);
    cout<<"pascals triangle is : "<<endl;

    for (const auto& row : ans) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }

    */
    
    cout<<endl;
   
   /* // majority element

    vector<int> nums = {2,2,1,1,1,2,2};
    int majority = majorityElement(nums);
    cout << "Majority Element: " << majority << endl;

    */ 

    /*  // 121. Best Time to Buy and Sell Stock - one transaction allowed

    vector<int> prices = {7,1,5,3,6,4};
    int max_profit = maxProfit(prices);
    cout << "Maximum Profit: " << max_profit << endl;
    */

    /*

    // pascals triangle II

    int rowIndex;
    cout<<"enter the row index"<<endl;
    cin>>rowIndex;
    vector<int> ans = getRow(rowIndex);
    cout<<"pascals triangle II is : "<<endl;
    for (int num : ans) {
        cout << num << " ";
    }
    cout << "\n";

    */

    // min and max of an array
    vector<int> arr = {1, 2, 3, 4, 5};
    pair<int , int> ans = minmax(arr);
    cout<<"min and max of the array is : "<<endl;
    cout<<"min : "<<ans.first<<endl;
    cout<<"max : "<<ans.second<<endl;
    cout<<endl;

    // set matrix zeroes
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    cout<<"matrix before setting zeroes : "<<endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }
    setZeroes(matrix);
    cout<<"matrix after setting zeroes : "<<endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }
    cout<<endl;


    return 0;
}
