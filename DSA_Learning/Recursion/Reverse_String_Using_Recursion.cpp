#include<iostream>
using namespace std;

void reverse(string& res , int i , int j){

    //base case 
    if(i>j){
        return ;
    }

    swap(res[i] , res[j]);
    i++;
    j--;
    reverse(res , i , j);

}
// hw -> single pointer ;

int main(){

    string name = "abcde";
    reverse(name , 0 , name.length()-1);
    cout<<name; // edcab


    return 0;
}