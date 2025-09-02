#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == nullptr)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// traversal
void print(Node *&tail)
{

    if (tail == nullptr)
    {
        cout << "empty" << endl;
        return;
    }

    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void printLinear(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool detectLoop(Node *head)
{

    // base case
    if (head == nullptr)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != nullptr) // here while loop continues in infinity loop
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// detect the loop

bool floydsdetectloop(Node *head)
{

    // base case
    if (head == nullptr)
    {
        return false;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != nullptr && fast != nullptr)
    {

        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return false;
}

// finding the starting of loop
Node *getstartingnode(Node *head)
{

    if (head == nullptr)
    {
        return nullptr;
    }

    Node *slow = head;
    Node *fast = head;
    bool hasloop = false;
    while (fast != nullptr && slow != nullptr)
    {
        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            hasloop = true;
            break;
        }
    }
    if (!hasloop)
        return nullptr;

    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

// remove the loop ->
Node* removeloop(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *slow = head;
    Node *fast = head;
    bool hasloop = false;
    // detect loop
    while (slow != nullptr && fast != nullptr)
    {

        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (fast == slow)
        {
            hasloop = true;
            break;
        }
    }
    if (!hasloop)
        return head ; // not cyclic

    // find starting loop node
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    // Find the last node in the loop and break it
    Node*temp = fast;
    while (temp->next !=fast)
    {
        temp = temp->next;
    }
    temp->next = nullptr;

    return head;
}

int main()
{

    Node *tail = nullptr;

    insertNode(tail, 2, 10);
    print(tail);

    insertNode(tail, 10, 20);
    print(tail);

    insertNode(tail, 20, 890);
    print(tail);

    insertNode(tail, 20, 130);
    print(tail);

    if (floydsdetectloop(tail))
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    Node *startNode = getstartingnode(tail);
    if (startNode)
    {
        cout << "Loop starts at: " << startNode->data << endl;
    }
    else
    {
        cout << "No loop detected." << endl;
    }

    Node*head = removeloop(tail);
    printLinear(head);
    if (floydsdetectloop(tail))
    {
        cout<<"Loop or Not : " << "Yes" << endl;
    }
    else
    {
        cout<<"Loop or Not :  " << "No" << endl;
        
    }

    return 0;
}