#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int val) : data(val) , next(nullptr) {}

};


int main(){

    int n;
    cin>>n;

    Node*head = nullptr;
    Node*tail = nullptr;
    // user input -> 
    for(int i=0; i<n; i++){
        int val ; cin>>val;
        Node* newnode = new Node(val);
        if(!head) head = tail = newnode;
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    Node*temp = head;
    while(temp->next && temp->next->next){
        temp = temp->next;
    }

    cout<<temp->data<<" ";

    /*
      if n = 5 
      and linked_list is given as ->  { 1 -> 2 -> 3 -> 4 -> 5 }
      second_last_element =  4 ;

    */

    return 0;
}