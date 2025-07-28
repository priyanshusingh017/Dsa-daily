#include <iostream>
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

Node*uniqueSortedList(Node*head){

    //empty list
    if(head == nullptr){
        return nullptr;
    }

    Node*curr = head;
    while(curr != nullptr){

        if(curr->next != nullptr && curr -> data == curr->next->data){
            Node*next_next = curr->next->next;
            Node*todelete = curr->next;
            delete(todelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertionattail(tail, 12);
    print(head); // 12 , 10

    insertionattail(tail, 12);
    print(head); // 15 , 12 , 10

    insertionattail(tail , 15);
    print(head);

    insertionattail(tail, 15);
    print(head);

    insertionattail(tail , 18);
    print(head);

    Node*head1=uniqueSortedList(head);
    print(head1);
    


    return 0;
}