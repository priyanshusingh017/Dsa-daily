#include <iostream>
#include <vector>
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

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

vector<Node *> alternatingSplitList(Node*&head)
{

    //base case 
    if(head==nullptr) return {nullptr , nullptr};

    Node *first = new Node(0);
    Node *second = new Node(0);

    Node *f = first;
    Node *s = second;

    while(head && head->next !=nullptr){
        f->next=head;
        f=f->next;

        s->next = head->next;
        s=s->next;

        head=head->next->next;
    }
    f->next=head;
    s->next=nullptr;

    return {first->next , second->next};
}

int main()
{

    Node *node1 = new Node(0);
    Node *tail = node1;
    Node *head = node1;

    insertionattail(tail, 1);
    print(head);

    insertionattail(tail, 0);
    print(head);

    insertionattail(tail, 1);
    print(head);

    insertionattail(tail, 0);
    print(head);

    insertionattail(tail, 1);
    print(head);

    vector<Node *> result = alternatingSplitList(head);

    cout << "First list (odd positions): ";
    print(result[0]);

    cout << "Second list (even positions): ";
    print(result[1]);
}