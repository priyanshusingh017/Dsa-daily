#include <iostream>
#include<bits/stdc++.h>
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

// hw -> //split circular in two half

Node *uniqueelment(Node *head)
{

    // empty
    if (head == nullptr)
        return nullptr;

    unordered_map<int, bool> visited;

    Node *curr = head;
    Node *prev = nullptr;

    while (curr != nullptr)
    {

        if (visited[curr->data] == true)
        {
            Node *todelete = curr;
            curr = curr->next;
            if (prev != nullptr)
            {
                prev->next = curr;
            }
            delete (todelete);
        }
        else
        {
            visited[curr->data] = true;
            prev = curr;
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

    insertionattail(tail, 14);
    print(head); // 15 , 12 , 10

    insertionattail(tail, 15);
    print(head);

    insertionattail(tail, 12);
    print(head);

    insertionattail(tail, 15);
    print(head);

    insertionattail(tail, 17);
    print(head);

    Node *head1 = uniqueelment(head);
    print(head1);

    return 0;
}