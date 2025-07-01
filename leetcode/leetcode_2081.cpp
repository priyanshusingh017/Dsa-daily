#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkpalindrom(string s){
    int left = 0 , right=s.size()-1;
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}

string basechange(int num , int k){
    string res ="";
    while(num>0){
        res += to_string(num%k);
        num/=k;
    }
    reverse(res.begin() , res.end());
    return res;
}

long long kMirror(int k, int n) {

    int count=0;
    long long sum = 0;
    int num=1;
    while(count<n){

        string num1 = to_string(num);
        if(checkpalindrom(num1)){

            string baseK = basechange(num , k);
            if(checkpalindrom(baseK)){
                sum+=num;
                count++;
            } 
        }
        num++;
    }
    return sum;
}

class Solution {
    vector<int>ret;
public:
bool isPal(vector<int>&num, int st, int end)
    {
        
        while(st < end)
        {
            if(num[st]!=num[end])
            return 0;
            st++;
            end--;

        }
        return 1;
    }
    bool getKform(long long num, int k)
    {
        // vector<int>ret;
        int idx=0;
        while(num)
        {
            ret[idx]=(num%k);
            num/=k;
            idx++;
        }
        // reverse(ret.begin(),ret.end());
        return isPal(ret,0,idx-1);
    }
    long long getPal(long long base, int odd)
    {
        //we can leave the last digit if odd is 0
        long long copy = odd?base:(base/10);
        long long rev=0;
        while(copy)
        {
            base*=10;
            rev=rev *10 + copy%10;
            copy/=10;
        }
        return base + rev;
    }
    // bool isPal(long long num, int k)
    // {
    //     long long reversed = 0;
    //     long long copy = num;
    //     while(copy)
    //     {
    //         reversed = reversed*k + copy%k;
    //         copy/=10;
    //     }
    //     return reversed==num;
    // }
    long long kMirror1(int k, int n) {

        ret.resize(50);
        int st=1;
        int end=10;
        long long sum=0;
        while(n>0)
        {
            for(int i=0;i<2 && n>0;i++)
            {
                //i=0 means odd length form this base
                for(int j=st;j<end && n>0;j++)
                {
                    // cout<<j<<"j \n";
                    long long num = getPal(j,i);
                    // cout<<num<<"\n";
                    if(getKform(num,k))
                    {
                        n--;
                        sum+=num;
                    }
                }
            }
            st=end;
            end*=10;
        }
        return sum;
    }
};

int main(){

    cout<<kMirror(2,5)<<endl;
    cout<<kMirror(3,7)<<endl;
    cout<<kMirror(7,17)<<endl;

    return 0;
}