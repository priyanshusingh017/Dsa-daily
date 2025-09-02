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
//delete alternative node
void deleteAlt(struct Node *&head)
{

    // base case
    if (head == nullptr || head->next == nullptr)
        return;

    Node *curr = head;
    Node *next1 = curr->next;

    while (curr != nullptr && next1 != nullptr)
    {

        curr->next = next1->next;
        delete (next1);

        curr = curr->next;
        if (curr != nullptr)
        {
            next1 = curr->next;
        }
    }
}

//delete node in linked _ list
/*
 The number of the nodes in the given list is in the range [2, 1000].
-1000 <= Node.val <= 1000
The value of each node in the list is unique.
The node to be deleted is in the list and is not a tail node.
*/

void deltenode(Node*node){
    Node*temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    delete(temp);
}

int main()
{
    // Create and populate the linked list
    Node *node1 = new Node(1);
    Node *tail = node1;
    Node *head = node1;

    insertionattail(tail, 2);
    insertionattail(tail, 3);
    insertionattail(tail, 4);
    insertionattail(tail, 5);
    insertionattail(tail, 6);

    cout << "Original list: ";
    print(head);

    // Test delete alternate nodes
    deleteAlt(head);
    cout << "After deleting alternate nodes: ";
    print(head);

    // Test delete specific node (delete node with value 3)
    Node* toDelete = head->next; // This points to node with value 3
    if (toDelete != nullptr) {
        deltenode(toDelete);
        cout << "After deleting node with value 3: ";
        print(head);
    }



    return 0;
}