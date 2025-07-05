#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// -> Add_Strings("11" , "123" ) -> "134"
string addstrings(string s , string r){
    int n = s.size()-1;
    int m = r.size()-1;
    string res;
    int carry = 0;
    while(n>=0 || m>=0 || carry>0){
        int digit1 = n>=0 ? s[n--]-'0' : 0;
        int digit2 = m>=0 ? r[m--]-'0' : 0;
        carry += digit1 + digit2 ;
        res += (carry%10) + '0'; 
        carry = carry/10;
    }
    reverse(res.begin() , res.end());
    return res;
}

// -> AddBinary("110" , "100" ) -> "1010" 
string addbinary(string num1 , string num2){
    int n = num1.size()-1;
    int m = num2.size()-1;
    int carry =0;
    string res;
    while(n>=0 || m>=0 || carry>0){
        int digit1 = n>=0 ? num1[n--] -'0' : 0;
        int digit2 = m>=0 ? num2[m--] - '0' : 0;
        carry += digit1 + digit2;
        res += (carry%2)+'0';
        carry /= 2;
    }
    reverse(res.begin() , res.end());
    return res;
}

// multiply_Strings ( "3" , "5" ) -> "15" 
string multiply_strings(string nums1 , string nums2){
    int n = nums1.size();
    int m = nums2.size();
    string a (n+m , '0');
    for(int i = n-1 ; i>=0; i--){
        for(int j = m-1 ; j>=0; j--){
            int p = (nums1[i]-'0') * (nums2[j]-'0') + (a[i+j+1]-'0');
            a[i+j+1] = (p%10)+'0';
            a[i+j] += p/10;
        }
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]!= '0' ) return a.substr(i);
    }
    return "0";
}

// Beautiful Number -> like count of number is equal to digit -> 122 is beautiful number 1 : 1(count) , 2:2(count) .
bool beautifulNumber(int n){
    string number = to_string(n);  // int to string change 
    unordered_map<char , int> res;
    for(auto num : number ){
        res[num]++;
    }

    for(auto it : res){
        int num = it.first - '0';  // char to int change 
        int count =  it.second ;
        if(num!=count){
            return false;
        }
    }
    return true;
}

int nextBeautifulNumber(int limit){
    int next = limit+1;
    int number = 0;

    while(true){
        if(beautifulNumber(next)){
            number = next;
            break;
        }
        next++;
    }
    return number;
}

// beautifulneighbors -> return the first day on at least M consectiuve house filled . nums are given in for that on eacy day given number house filled .
// like {3,2,1} on day 1 -> house 3 filled , on day 2 -> house 2 filled and so on ... 
int beautifulneighbors(int n , int M , vector<int>&nums){
    vector<int>filled(n+1 , 0) ;  // n - nums.size();
    for(int days =0 ; days<n ; days++){
        filled[nums[days]]= 1;
        int count =0;
        for(int i=1; i<=n; i++){
            if(filled[i]==1){
                count++;
                if(count>=M){
                    return days+1;
                }
            }
            else{
                count=0;
            }
        }
    }
    return 0;
}

// here A travesal from left where B traversal from right side when A>B print 1 and remove B ; if A<B print 2 and remove A ; 
//if both equal then print 0 and remove both ;
vector<int> arraypatternprint(vector<int>& nums){
    int n =  nums.size();
    int l=0 , r=n-1;
    vector<int>res;
    while(l<=r){
        if(nums[l]>nums[r]){
            res.push_back(1);
            r--;
        }
        else if(nums[l]<nums[r]){
            res.push_back(2);
            l++;
        }
        else{
            res.push_back(0);
            l++;
            r--;
        }
    }
    return res;
}


int main(){

    cout<<addstrings("11" , "123")<<endl; // 11 + 123 = 134 

    cout<<addbinary("110" , "100")<<endl; //1010 ( 110 + 100 = 1010)

    cout<<multiply_strings("3" , "5")<<endl; // 15;

    cout<<nextBeautifulNumber(250)<<endl; // 333
    cout<<nextBeautifulNumber(123)<<endl; // 212

    vector<int> nums = {3,5,2,4,1};
    cout<<beautifulneighbors(5 , 2 , nums)<<endl; // 3


    vector<int>nums1 = {3,4,1,2};
    vector<int>res = arraypatternprint(nums1); // 1 1 2 0 
    for(auto i : res){
        cout<<i<<" ";
    }


    return 0;
}