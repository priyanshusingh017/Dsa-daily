#include<iostream>
#include<bits/stdc++.h>
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

//find words containing character
vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int>result;
    for(int i=0; i<words.size(); i++){
        if(words[i].find(x)!= -1){ // alternate of -1 -> string::npos 
            result.push_back(i);
        }
    }
    return result;
}

// find target indices after sorting -> 
vector<int> targetIndices(vector<int>& nums, int target){
    for(int i=0; i<nums.size(); i++){
        int minindex =i;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[minindex]>nums[j]){
                minindex=j;
            }
        }
        swap(nums[i] , nums[minindex]);
    }
    vector<int>result;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            result.push_back(i);
        }
    }
    return result;
}

// find first and last position of element in sorted array
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>result;
    int firstoccurence =-1 , lastoccurence =-1;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            firstoccurence = i;
            break;
        }
    }
    for(int i=nums.size()-1; i>=0; i--){
        if(nums[i]==target){
            lastoccurence = i;
            break;
        }
    }
    result.push_back(firstoccurence);
    result.push_back(lastoccurence);
    return result;
}

// rank of a number
vector<int> arrayRankTransform(vector<int>& arr) {
    vector<int> sortedarr = arr;
    sort(sortedarr.begin(), sortedarr.end());
    unordered_map<int , int>ans;
    int rank=1;
    for(auto num : sortedarr){
        if(ans.find(num)==ans.end()){
            ans[num]=rank++;
        }
    }
    vector<int>result(arr.size());
    for(int i=0; i<arr.size(); i++){
        result[i]=ans[arr[i]];
    }
    return result;
}

// divisible-and-non-divisible-sums-difference 
int differenceOfSums(int n, int m) {
    int sum1 = 0 , sum2 = 0 ;
    for(int i = 1 ; i<=n; i++){
        if(i%m!=0){
            sum1 += i; 
        }
        else{
            sum2 += i;
        }
    }
    return sum1 - sum2;
}

// smallest-index-with-digit-sum-equal-to-index

int smallestIndex(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
        int digit=nums[i];
        int sum=0;
        while(digit>0){
            sum += digit%10;
            digit /= 10;
        }
        if(sum ==i){
            return i;
        }
    }
    return -1; 
}

// sqrt of a number 
int mysqrt(int x){
    if(x<2) return x;
    int left=2 ,  right = x/2 , ans=1;
    while(left <= right){
        int mid = left + (right - left)/2;
        long long square = (long long)mid*mid;
        if(square ==x){
            return mid;
        }
        else if(square <x){
            ans = mid;
            left = mid+1;
        }
        else{
            right= mid-1;
        }
    }
    return ans;
}

// isprime function - 
bool isprime(int x){
    if(x<=1) return false;
    for(int i=2; i<x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

// cout prime no. - sieve of eratosthenes - 204
int countprime(int n){
    int count=0;
    vector<bool>isprime(n+1, true);
    isprime[0] = isprime[1]=false;
    for(int i=2; i<n; i++){
        if(isprime[i]){
            count++;
            for(int j=2*i; j<=n; j=j+i){
                isprime[j]=false;
            }
        }
    }
    return count;
}

// segment sieve - homework 

// euclid's algorithm - recursive version
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    while(b!=0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int gcd1(int a , int b){
    if(b==0) return a;
    return gcd1(b, a%b);
}

// ugly number - 263
bool isugly(int n){
    for(int i=2; i<=5; i++){
        if(n==0) return false;
        while(n%i==0){
            n /= i;
        }
    }
    return n==1;
}

// first n ugly number - 
int nthuglynumber(int n){
    if(n==0) return false;
    int count = 0;
    int num = 1;
    while(count<n){
        if(isugly(num)){
            count++;
        }
        num++;
    }
    return num-1; 
}

// first n ugly number - without using isugly function homework

// no of common factors
int commonFactors(int a, int b) {
    int count = 0;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            // cout << i << " "; // print common factor
            count++;
        }
    }
    return count;
}

// contains duplicate - 217
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int>seen;
    for(int num : nums){
        if(seen.count(num)){
            return true;
        }
        seen.insert(num);
    }
    return false;
}
bool containsDuplicate1(vector<int>& nums){
    unordered_map<int,int>freq;
    for(auto i:nums){
        freq[i]++;
    }
    for(auto i1:freq){
        if(i1.second>1){
            return true;
        }
    }
    return false;
}
int main(){

    /*

    //problem 1 - difference between product and sum of digits
    
    int n1;
    cout<<"enter the number for problem 1"<<endl;
    cin>>n1;
    int product =1;
    int sum=0;
    int answer1 = 0;
    int temp1 = n1;
    while(temp1!=0){

        int digit = temp1%10;
        product=product*digit;
        sum=sum+digit;
        temp1/=10;
    }
    answer1 = product - sum;
    cout<<"difference between product and sum of digits is : "<<endl;
    cout<<answer1;
    cout<<endl;
    

   //problem 2 - count of odd digits

   int n2;
   cout<<"enter the number for problem 2"<<endl;
   cin>>n2;
   int count2=0;
   int temp2 = n2;
   while(temp2!=0){
    if (temp2&1){
       count2++;
    }
    temp2=(temp2/10);
   }
    cout<<"count of odd digits is : "<<endl;
   cout<<count2;
   cout<<endl;

   //PROBLEM 3 - reverse of a number

   int n3;
    cout<<"enter the number for problem 3"<<endl;
   cin>>n3;
   int answer3=0;
   int temp3 = n3;
   while(temp3!=0){
    int digit=temp3%10;
    if(answer3>INT_MAX/10 || answer3<INT_MIN/10){
        cout<<0;
    }
    answer3=answer3*10+digit;
    temp3=temp3/10;
   }
    cout<<"reverse of the number is : "<<endl;
   cout<<answer3;

    cout<<endl;

    // pascals triangle

    int numRows;
    cout<<"enter the number of rows"<<endl;
    cin>>numRows;
    vector<vector<int>> ansTriangle = generate(numRows);
    cout<<"pascals triangle is : "<<endl;

    for (const auto& row : ansTriangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }
    cout<<endl;
   
   // majority element

    vector<int> nums = {2,2,1,1,1,2,2};
    int majority = majorityElement(nums);
    cout << "Majority Element: " << majority << endl;

    cout<<endl;

    // 121. Best Time to Buy and Sell Stock - one transaction allowed

    vector<int> prices = {7,1,5,3,6,4};
    int max_profit = maxProfit(prices);
    cout << "Maximum Profit: " << max_profit << endl;
    cout<<endl;

    // pascals triangle II

    int rowIndex;
    cout<<"enter the row index"<<endl;
    cin>>rowIndex;
    vector<int> ansRow = getRow(rowIndex);
    cout<<"pascals triangle II is : "<<endl;
    for (int num : ansRow) {
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

    // find words containing character
    vector<string> words = {"hello", "world", "leetcode", "code"};
    char x = 'e';
    vector<int> indices = findWordsContaining(words, x);
    cout << "Words containing character '" << x << "': ";
    for (int index : indices) {
        cout << index << " ";
    }
    cout<<endl;

    // find target indices after sorting
    vector<int> nums1 = {1,2,5,2,3};
    int target = 2;
    vector<int> targetIndicesResult = targetIndices(nums1, target);
    cout << "Target indices after sorting "<<target<<": ";
    for (int index : targetIndicesResult) {
        cout << index << " ";
    }
    cout<<endl;

    // find first and last position of element in sorted array
    vector<int> nums2 = {5,7,7,8,8,10};
    int target2 = 8;
    vector<int> searchRangeResult = searchRange(nums2, target2);
    cout << "First and last position of target " << target2 << ": ";
    for(auto i : searchRangeResult){
        cout<<i<<" ";
    }
    cout<<endl;

    // rank of a number
    vector<int> arr1 = {40,10,20,30};
    vector<int> rankResult = arrayRankTransform(arr1);
    cout << "Rank of the numbers: ";
    for (int rank : rankResult) {
        cout << rank << " ";
    }
    cout<<endl;

    // divisible-and-non-divisible-sums-difference
    int n = 10, m = 3;
    int difference = differenceOfSums(n, m);
    cout << "Difference of sums: " << difference << endl;
    cout<<endl; 

    // smallest-index-with-digit-sum-equal-to-index
    vector<int> nums3 = {1,3,2};
    int smallestIndexResult = smallestIndex(nums3);
    if (smallestIndexResult != -1) {
        cout << "Smallest index with digit sum equal to index: " << smallestIndexResult << endl;
    } else {
        cout << "No such index found." << endl;
    }
    cout<<endl;

    // sqrt of a number
    int x1 = 2;
    int sqrtResult = mysqrt(x1);
    cout << "Square root of " << x1 << " is: " << sqrtResult << endl;
    cout<<endl;

    // count prime numbers
    int x2;
    cout<<"enter the number to count prime numbers less than it"<<endl;
    cin>>x2;
    int count = countprime(x2);
    cout << "Count of prime numbers less than " << x2 << ": " << count << endl;
    cout<<endl;

    // gcd of two numbers
    int a, b;
    cout << "Enter two numbers to find GCD: ";
    cin >> a >> b;
    int gcdResult = gcd1(a, b);
    int gcdresult = gcd(a, b);
    cout<<gcdresult<<endl;
    cout << "GCD of " << a << " and " << b << " is: " << gcdResult << endl;
    cout<<endl;

    // ugly number
    int n3;
    cout << "Enter a number to check if it is an ugly number: ";
    cin >> n3;
    if (isugly(n3)) {
        cout << n3 << " is an ugly number." << endl;
    } else {
        cout << n3 << " is not an ugly number." << endl;
    }
    cout<<endl;

    // nth ugly number
    int n4;
    cout << "Enter the value of n to find the nth ugly number: ";
    cin >> n4;
    int nthUglyNumberResult = nthuglynumber(n4);
    cout << "The " << n4 << "th ugly number is: " << nthUglyNumberResult << endl;

    cout<<endl;

    // common factors
    int a1, b1;
    cout << "Enter two numbers to find common factors: ";
    cin >> a1 >> b1;
    int commonFactorsResult = commonFactors(a1, b1);
    cout << "Number of common factors between " << a1 << " and " << b1 << ": " << commonFactorsResult << endl;
    cout<<endl;


    // duplicate in array
    vector<int> nums4 = {1, 2, 3, 1};
    bool hasDuplicate = containsDuplicate(nums4);
    if (hasDuplicate) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }

    cout<<endl;
    // duplicate in array using unordered_map
    vector<int> nums5 = {1, 3, 3};
    bool hasduplicate1 = containsDuplicate1(nums5);
    if (hasduplicate1) {
        cout << "The array contains duplicates in array using unordered_map ." << endl;
    } else {
        cout << "The array does not contain duplicates in array using unordered_map ." << endl;
    }
    cout<<endl;
    return 0;
}
