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

int getlength(Node *head)
{

    int len = 0;
    while (head != nullptr)
    {
        len++;
        head = head->next;
    }

    return len;
}

Node *middleNode(Node *head)
{
    int len = getlength(head);
    int ans = (len / 2);

    Node *temp = head;
    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }

    return temp;
}

Node *getMiddle(Node *head)
{

    // base case
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    if (head->next->next == nullptr)
    {
        return head->next;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != nullptr)
    {
        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow;
}

Node *middleNode1(Node *head)
{
    return getMiddle(head);
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

    head = middleNode1(head);
    cout << "middle of list : " << endl;
    print(head);

    return 0;
}