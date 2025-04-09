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

    /* // pascals triangle

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
   
   /* // majority element

    vector<int> nums = {2,2,1,1,1,2,2};
    int majority = majorityElement(nums);
    cout << "Majority Element: " << majority << endl;

    */ 

    //  // 121. Best Time to Buy and Sell Stock - one transaction allowed

    vector<int> prices = {7,1,5,3,6,4};
    int max_profit = maxProfit(prices);
    cout << "Maximum Profit: " << max_profit << endl;
    


    return 0;
}
