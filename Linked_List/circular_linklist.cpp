#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node*next;

    Node(int val) : data(val) , next(nullptr) {}
};

void insertNode(Node*&tail , int element , int d){

    // empty list
    if(tail == nullptr){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{

        Node*curr = tail;
        while(curr->data != element){
            curr= curr->next;
        }

        Node*temp = new Node(d);
        temp->next = curr->next;
        curr ->next = temp;

    }
}

//traversal
void print(Node*&tail){

    if(tail == nullptr){
        cout<<"empty"<<endl;
        return ;
    }

    Node*temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* & tail , int val){

    //empty
    if(tail==nullptr){
      return;  
    }
    else{

        Node*prev = tail;
        Node*curr = prev->next;

        while(curr->data != val){

            prev = curr;
            curr = curr->next;
        }

        prev ->next = curr -> next;

        //1 node linklist
        if(curr == prev){
            tail = nullptr;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr->next = nullptr;

        delete curr;
    }
}

int main(){

    Node*tail = nullptr;

    insertNode(tail , 2 , 10);
    print(tail);
    


    insertNode(tail , 10 , 20);
    print(tail);

    insertNode(tail , 20 , 890);
    print(tail);
    

    insertNode(tail , 20 , 130);
    print(tail);

    deleteNode(tail , 10);
    print(tail);

    deleteNode(tail , 130);
    print(tail);

    deleteNode(tail , 20);
    print(tail);

    deleteNode(tail , 890);
    print(tail);
    
    

    return 0;
}