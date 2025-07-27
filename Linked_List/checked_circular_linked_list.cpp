#include <iostream>
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

bool iscircularList(Node*head){

    //basecase
    if(head) return true;

    Node*temp = head->next;

    while(temp!=nullptr && temp !=head){
        temp = temp->next;
    }

    if(temp==nullptr){
        return false;
    }
    if(temp ==head){
        return true;
    }
    return false;
}

bool isCircular1 (Node* head){  // [1,2,3,5,8,6,5] -> here 6 connect to 5 not head that why its false;
    // Write your code here.
    if (head == nullptr )
    {
        return true;
    }
    if(head->next == nullptr) return false;

    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) // cyclic
        {
            Node*temp = slow;
            do{
                if(temp == head){
                    return true; // circluar 
                }
                temp = temp->next;
            }while(temp!=slow);
            return false; // not circular but cyclic 
        }
    }
    return false;
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


    if(iscircularList(tail)){
        cout<<"Y"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }

    return 0;

    //floyd's cycle detection algorithm
}