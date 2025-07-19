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

void reverse(Node *&head, Node *curr, Node *prev)
{

    // base case
    if (curr == nullptr)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *reverselist(Node *&head)
{

    Node *curr = head;
    Node *prev = nullptr;

    reverse(head, curr, prev);
    return head;
}

Node *reverselist1(Node *&head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *prev = nullptr;
    Node *curr = head;

    while (curr != nullptr)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node *reverse2(Node *head)
{

    // base case
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *remhead = reverse2(head->next);
    head->next->next = head;
    head->next = nullptr;

    return remhead;
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

    head = reverse2(head);
    cout << "reverse the list" << endl;
    print(head);

    return 0;
}