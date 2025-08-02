#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertionatTail(Node *&tail, int data)
{

    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *findmid(Node *&head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *merge(Node *&left, Node *&right)
{

    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;

    Node *ans = new Node(-1);
    Node *temp = ans;

    while (left != nullptr && right != nullptr)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != nullptr)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != nullptr)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}
Node *mergesort(Node *head)
{

    // base case
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *mid = findmid(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = nullptr;

    left = mergesort(left);
    right = mergesort(right);

    Node *res = merge(left, right);

    return res;
}

int main()
{

    Node *node1 = new Node(2);
    Node *head = node1;
    Node *tail = node1;

    insertionatTail(tail, 5);
    print(head);

    insertionatTail(tail, 1);
    print(head);

    insertionatTail(tail, 7);
    print(head);

    cout<<"Original Linked-List -> "<<endl;
    print(head);

    Node*head1 = mergesort(head);

    cout<<"Linked-List after Merge sort -> "<<endl;
    print(head1);

    return 0;
}