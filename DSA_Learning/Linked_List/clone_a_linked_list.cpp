#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *random;

    Node(int val) : data(val), next(nullptr), random(nullptr) {}
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertionattail(Node *&head, Node *&tail, int d)
{

    Node *temp = new Node(d);
    if (head == nullptr)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *copyList(Node *head)
{

    // temp -> originalnode
    // temp2 -> newnode

    if (head == nullptr)
        return nullptr;

    // Step 1: Clone the list and create a mapping from original to new nodes

    Node *clonehead = nullptr;
    Node *clonetail = nullptr;

    Node *temp = head;
    while (temp != nullptr)
    {
        insertionattail(clonehead, clonetail, temp->data);
        temp = temp->next;
    }

    // Step 2: Set the random pointers in the cloned list

    unordered_map<Node *, Node *> oldtonew;

    temp = head;
    Node *temp2 = clonehead;
    while (temp != nullptr && temp2 != nullptr)
    {
        oldtonew[temp] = temp2;
        temp = temp->next;
        temp2 = temp2->next;
    }

    temp = head;
    temp2 = clonehead;
    while (temp != nullptr)
    {
        temp2->random = oldtonew[temp->random];
        temp = temp->next;
        temp2 = temp2->next;
    }

    return clonehead;
}

Node *copyList1(Node *head)
{
    // step 1: Create a Clone List
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertionattail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    // step 2: insert nodes of Clone List in between originalList

    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }

    // step 3: Random pointer copy
    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {

        if (originalNode->random != NULL)
        {
            cloneNode->random = originalNode->random->next;
        }
        else
        {
            cloneNode->random = NULL;
        }

        cloneNode = cloneNode->next;
        originalNode = originalNode->next;
    }

    // step 4: revert step 2 changes
    Node *original = head;
    Node *copy = cloneHead;

    while (original && copy)
    {
        original->next =
            original->next ? original->next->next : original->next;

        copy->next = copy->next ? copy->next->next : copy->next;
        original = original->next;
        copy = copy->next;
    }

    // step 5 answer return
    return cloneHead;
}

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(12);
    Node *node3 = new Node(15);

    node1->next = node2;
    node2->next = node3;

    node1->random = node3;
    node2->random = node1;
    node3->random = node2;

    Node *head = node1;
    Node *tail = node3;

    cout << "Original List: ";
    print(head);

    Node *copiedList = copyList(head);

    cout << "Copied List: ";
    print(copiedList);

    // Verify random pointers
    cout << "Original List Random Pointers:" << endl;
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " random points to ";
        if (temp->random != nullptr)
            cout << temp->random->data << endl;
        else
            cout << "NULL" << endl;
        temp = temp->next;
    }

    cout << "Copied List Random Pointers:" << endl;
    temp = copiedList;
    while (temp != nullptr)
    {
        cout << temp->data << " random points to ";
        if (temp->random != nullptr)
            cout << temp->random->data << endl;
        else
            cout << "NULL" << endl;
        temp = temp->next;
    }

    return 0;
}