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

Node* solve(Node *head1, Node *head2)
{
    if(head1->next == nullptr){
        head1->next = head2;
        return head1;
    }

    Node *curr1 = head1;
    Node *next1 = curr1->next;
    Node *curr2 = head2;
    Node *next2 = nullptr;

    while (next1 != nullptr && curr2 != nullptr)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;

            if (next1 == nullptr)
            {
                curr1->next = curr2;
                return head1;
            }
        }
    }
    return head1;
}

Node *meregetwosortedlist(Node *head1, Node *head2)
{
    if (head1 == nullptr)
    {
        return head2;
    }
    if (head2 == nullptr)
    {
        return head1;
    }

    if (head1->data <= head2->data)
    {
        return solve(head1, head2);
    }
    else{
        return solve(head2, head1);
    }
}

int main()
{
    // First sorted list: 1 -> 3 -> 5
    Node *node1 = new Node(1);
    Node *head1 = node1;
    Node *tail1 = node1;
    insertionattail(tail1, 3);
    insertionattail(tail1, 5);

    // Second sorted list: 2 -> 4 -> 6
    Node *node2 = new Node(2);
    Node *head2 = node2;
    Node *tail2 = node2;
    insertionattail(tail2, 4);
    insertionattail(tail2, 6);

    cout << "List 1: ";
    print(head1);
    cout << "List 2: ";
    print(head2);

    Node *merged = meregetwosortedlist(head1, head2);
    cout << "Merged: ";
    print(merged);

    return 0;
}