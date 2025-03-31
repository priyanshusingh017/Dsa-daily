#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

    vector<int>v;

    v.push_back(5);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);


    //binary_search function is used to check if the element is present in the vector or not

    cout<<"finding 20 -> "<<binary_search(v.begin(), v.end(), 20 )<<endl;

    cout<<"lower bound of 20 -> "<<lower_bound(v.begin(), v.end(), 20)-v.begin()<<endl;

    cout<<"upper bound of 20 -> "<<upper_bound(v.begin(), v.end(), 20)-v.begin()<<endl;

    cout<<"reverse of vector -> ";
    reverse(v.begin(), v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    //rotate function is used to rotate the elements of the vector
    cout<<"rotate of vector -> ";
    rotate(v.begin(), v.begin()+1, v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    //sort function is used to sort the elements of the vector
    cout<<"sorted vector -> ";
    sort(v.begin(), v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    int a=3 , b=4;
    cout<<"max of a and b -> "<<max(a,b)<<endl;
    cout<<"min of a and b -> "<<min(a,b)<<endl;

    cout<<"swap of a and b -> ";
    swap(a,b);
    cout<<endl;
    cout<<"a -> "<<a<<endl;
    cout<<"b -> "<<b<<endl;

    string s="hello world";

    cout<<"string -> "<<s<<endl;
    //cout<<"string size -> "<<s.size()<<endl;
    cout<<"string length -> "<<s.length()<<endl;
    reverse(s.begin(), s.end());
    cout<<"reversed string -> "<<s<<endl;

    
    
    return 0;
}