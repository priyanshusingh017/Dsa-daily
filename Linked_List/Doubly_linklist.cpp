#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node*prev;
    Node*next;

    Node(int val) : data(val) , next(nullptr) , prev(nullptr) {}
};

void print(Node*head){

    Node*temp = head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getlength(Node*&head){

    Node*temp = head;

    int length=0;
    while(temp != nullptr){
        length++;
        temp = temp->next;
    }
    return length;
}

//insertion 
void insertathead(Node*&tail , Node*&head , int data){

    if(head==nullptr){
        Node*temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{

    Node*temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

//insert at tail
void insertattail(Node*&head , Node*&tail , int d){

    if(tail==nullptr){
        Node*temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{

    Node* temp = new Node(d);
    tail ->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

//insert at position
void insertatposition(Node*&tail , Node*&head , int position , int d){

    //insert at first
    if(position==1){
        insertathead(tail , head , d);
        return;
    }

    Node*temp = head;
    int cnt=1;

    while(cnt <position-1){
        temp = temp->next;
        cnt++;
    }

    //insert at tail
    if(temp->next == nullptr){
        insertattail(head , tail , d);
        return;
    }

    // insert at middle 
    Node*temp1 = new Node(d);

    temp1->next = temp->next;
    temp->next->prev =  temp1;
    temp->next = temp1;
    temp1->prev = temp;
}

//delete the list
void deleteNode(int position , Node*&head){

    if(position==1){
        Node*temp = head;
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
        delete temp; 
    }
    else{

        //deleting any middle node or last node
        Node*curr = head;
        Node*prev = nullptr;

        int cnt =1 ;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr -> prev = nullptr;
        prev->next = curr->next;
        curr->next = nullptr;
        delete curr;

    }

}



int main(){

    Node*head = nullptr;
    Node*tail = nullptr;

    print(head);
    //cout<<getlength(head)<<endl;

    insertathead(tail ,head , 11);
    print(head);

    insertathead(tail , head , 12);
    print(head);

    insertathead(tail , head , 13);
    print(head);

    insertattail(head , tail , 8);
    print(head);

    insertattail(head , tail , 7);
    print(head);

    insertatposition(tail , head , 4 , 5);
    print(head);

    insertatposition(tail , head , 1 , 15);
    print(head);

    insertatposition(tail , head , 7 , 6);
    print(head);

    deleteNode(1 , head);
    print(head);

    deleteNode(7,head);
    print(head);
    cout<<head<<endl;// correct it 
    cout<<tail<<endl;

    return 0;
}