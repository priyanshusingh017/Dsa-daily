#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Node(int val) : data(val) , next(nullptr) {}

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertionathead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertionattail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertionAtposition(Node *tail, Node *head, int position, int d)
{

    // insert at start ->
    if (position == 1)
    {
        insertionathead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertionattail(tail, d);
        return;
    }

    // creating for d
    Node *nodepostion = new Node(d);
    nodepostion->next = temp->next;
    temp->next = nodepostion;
}

void deleteNode(int position, Node *&head)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free kar di
        temp->next = nullptr;
        delete temp;
    }
    else
    {

        // deleting any middle node and last node ->

        Node *curr = head;
        Node *prev = nullptr;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = nullptr;
        delete curr;
    }
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
            return true;
        }
    }
    return false;
}

int main()
{

    /*
    //creating linklist
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    //linked to next pointer
    node1 -> next = node3;
    node3 -> next = node2;

    //traversal
    Node* head = node1;
    while(head){
        cout<<head->data<<endl;
        head = head -> next;
    }
    */

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    // inserrtion At Head ->

    /*
    insertionathead(head , 12);
    print(head); // 12 , 10

    insertionathead(head , 15);
    print(head); // 15 , 12 , 10
    */

    // insertion At tail ->

    insertionattail(tail, 12);
    print(head);

    insertionattail(tail, 15);
    print(head);

    insertionAtposition(tail, head, 4, 22);
    print(head);

    /*
    deleteNode(3,head);
    print(head);

    */

    if (floydsdetectloop(head))
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}