#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertionattail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{

    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* sortList(Node*head){

    int zerocount =0;
    int onecount=0;
    int twocount=0;

    Node*temp = head;
    while(temp!=nullptr){
        if(temp->data == 0){
            zerocount++;
        }
        else if(temp->data == 1){
            onecount++;
        }
        else if (temp->data == 2){
            twocount++;
        }

        temp = temp->next;
    }

    temp = head;
    while(temp !=nullptr){
        if(zerocount != 0){
            temp->data = 0;
            zerocount--;
        }
        else if(onecount !=0){
            temp->data = 1;
            onecount--;
        }
        else if( twocount != 0){
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }

    return head;
}

void insertAttail(Node*&tail , Node*curr){

    tail->next = curr;
    tail = curr;
}

// approach - 2 -> data replacement not allowed 
Node*sortList1(Node*head){

    Node*zerohead = new Node(-1);
    Node*zeroTail = zerohead;
    Node*onehead = new Node(-1);
    Node*onetail = onehead;
    Node*twohead = new Node(-1);
    Node*twotail = twohead;

    Node*temp = head;
    while(temp != nullptr){

        int value = temp->data;

        if(value == 0){
            insertAttail(zeroTail , temp);
        }
        else if(value == 1){
            insertAttail(onetail , temp);
        }
        else if(value ==2){
            insertAttail(twotail , temp);
        }

        temp =temp->next;
    }

    // merege three list in one linkedlist
    if(onehead ->next != nullptr){
        zeroTail->next = onehead->next;
    }
    else{
        zeroTail->next = twohead->next;
    }

    onetail->next = twohead->next;
    twotail->next = nullptr;

    head = zerohead ->next;
    delete(zerohead);
    delete(onehead);
    delete(twohead);

    return head;
}

int main(){


    Node *node1 = new Node(1);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertionattail(tail, 0);
    print(head); 

    insertionattail(tail, 1);
    print(head); 

    insertionattail(tail, 2);
    print(head);

    insertionattail(tail, 2);
    print(head);

    cout << "Original list: ";
    print(head);

    cout << "After sortList (data replacement): ";
    Node* sortedByData = sortList(head);
    print(sortedByData);

    // Rebuild the original list for the next test if needed
    // (or comment out the above and only use the below)

    cout << "After sortList1 (node rearrangement): ";
    Node* sortedByNodes = sortList1(head);
    print(sortedByNodes);

    return 0;
}