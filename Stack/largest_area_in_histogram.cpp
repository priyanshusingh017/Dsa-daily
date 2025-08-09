#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
using namespace std;

vector<int>nextsmallest(vector<int>&heights , int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1; i>=0; i--){
        int curr = heights[i];
        while(s.top()!=-1 && heights[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

vector<int>prevsmallest(vector<int>&heights , int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=0; i<n; i++){
        int curr = heights[i];
        while(s.top()!=-1 && heights[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}


int largestareaArea(vector<int>&heights){

    int n = heights.size();

    vector<int>next(n);
    next = nextsmallest(heights , n);

    vector<int>prev(n);
    prev = prevsmallest(heights , n);

    int area = INT_MIN;
    for(int i=0; i<n; i++){
        int l=heights[i];

        if(next[i]==-1){
            next[i]=n;
        }
        int b = next[i]-prev[i]-1;

        int newarea = l*b;
        area = max(area , newarea);
    }

    return area;

}

int main(){

    vector<int>num= {2,1,5,6,2,3};

    cout<<largestareaArea(num);

    return 0;
}