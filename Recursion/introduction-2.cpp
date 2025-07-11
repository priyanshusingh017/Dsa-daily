#include<iostream>
using namespace std;

void reachhome (int src , int dest){

    cout<< "source " << src << " destination " << dest <<endl;

    //base case
    if(src==dest){
        cout<<"puch gaya"<<endl;
        return ;
    }

    //processing 
    src++;

    reachhome(src , dest);

}

int main(){

    int des = 10;
    int src = 1;

    reachhome(src , des);

    return 0;
}