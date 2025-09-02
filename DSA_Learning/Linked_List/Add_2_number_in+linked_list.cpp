#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int val) : data(val) , next(nullptr) {}
};

void insertionattail(Node*&tail , int d){

    Node*temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node*head){

    Node*temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
    cout<<endl;
}

Node* reverse(Node*head){
    Node*curr = head;
    Node*next = nullptr;
    Node*prev = nullptr;

    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertionatTail(Node*&head , Node*&tail , int val){

    Node*temp = new Node(val);
    if(head == nullptr){
        head = temp;
        tail = temp;
        return ;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

Node*add(Node*head1 , Node*head2){

    int carry =0;

    Node*anshead =  nullptr;
    Node*anstail = nullptr;

    while(head1 !=nullptr || head2!= nullptr || carry !=0){

        int val1 =0;
        if(head1 != nullptr){
            val1 = head1->data;
        }

        int val2 =0;
        if(head2!=nullptr){
            val2 = head2->data;
        }
        
        int sum = carry + val1 + val2;

        int digit = sum%10;
        insertionatTail(anshead , anstail , digit);
        carry = sum/10;

        if(head1 != nullptr){
            head1=head1->next;
        }

        if(head2!=nullptr){
            head2=head2->next;
        }
    }
    return anshead;
}

Node* addTwoLists(Node* head1, Node* head2){

    //reverse the linklist 
    head1 = reverse(head1);
    head2 = reverse(head2);

    Node*ans = add (head1 , head2);

    ans = reverse(ans);

    return ans;
}

int main(){

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

    Node*ans1 = addTwoLists(head1 , head2);
    print(ans1);


    return 0;
}