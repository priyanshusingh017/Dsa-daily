#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int val): data(val) , next(nullptr) {}
};

void insertionatTail(Node*&tail , int d){

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

// approach - 1 ->
bool checkpalindrome(vector<int>&arr){

    int n = arr.size();
    int l = 0;
    int r = n-1;
    while(l<=r){
        if(arr[l]!=arr[r]){
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

bool ispalindrome(Node*head){

    vector<int>arr;

    Node*temp = head;
    while(temp!=nullptr){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    return checkpalindrome(arr);
}

// approach 2 -> 
/*
1. find middle 
2. reverse after middle ll
3. compare 
4. repeat step 2 
*/

Node*getmid(Node*head){

    Node*slow = head;
    Node*fast = head->next;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast ->next->next;
        slow = slow -> next;
    }

    return slow;
}

Node*reverse(Node*head){
    Node*curr = head;
    Node*prev = nullptr;

    Node*next = nullptr;
    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool ispalindrome1(Node*head){

    //empty 
    if(head == nullptr || head->next == nullptr) return true;

    //step1->
    Node*middle = getmid(head);

    Node*temp = middle->next;
    middle->next = reverse(temp);

    Node*head1 = head;
    Node*head2 = middle->next;
    while(head2 != nullptr){

        if(head1->data != head2 ->data){
            return false;
        }
        head1 = head1 ->next;
        head2 = head2->next;
    }

    // optional 
    temp = middle->next ;
    middle->next = reverse(temp);

    return true;
}

int main(){

    Node*node1 = new Node(1);
    Node*head = node1;
    Node*tail = node1;

    insertionatTail(tail , 1);
    print(head);

    insertionatTail(tail , 2);
    print(head);

    insertionatTail(tail , 1);
    print(head);

    insertionatTail(tail , 1);
    print(head);

    if(ispalindrome1(head)){
        cout<<"Y"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }

    return 0;
}