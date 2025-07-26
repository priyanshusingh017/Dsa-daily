#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertattail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node*kreverse(Node*head , int k){

    //base case
    if(head==nullptr){
        return nullptr;
    }

    Node*next=nullptr;
    Node*curr = head;
    Node*prev= nullptr;
    int count=0;

    while(curr!=nullptr && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=next;
        count++;

    }

    if(next!=nullptr){
        head->next = kreverse(next , k);
    }

    return prev;
}

//leetcode - 25
Node*kreverse1(Node*head , int k){

    Node*curr = head;
    int count =0;
    while(curr!=nullptr && count<k){
        curr = curr->next;
        count++;
    }

    if(count==k){
        curr = kreverse1(curr , k);

        while(count-->0){
            Node*next = head->next;
            head->next = curr; //prev
            curr = head;
            head = next;
        }
        head = curr;
    }

    return head;
}


int main()
{

    Node *node1 = new Node(1);
    Node *tail = node1;
    Node *head = node1;
    print(head);

    insertattail(tail, 2);
    print(head);

    insertattail(tail, 3);
    print(head);

    insertattail(tail, 4);
    print(head);

    insertattail(tail, 5);
    print(head);

    /*head = kreverse(head , 3); //[3,2,1,5,4]
    print(head);
    */

    head = kreverse1(head , 3); //[3,2,1,4,5]
    print(head);

    return 0;
}