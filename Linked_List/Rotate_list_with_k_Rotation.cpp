#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct Node
{
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

void print(Node *&head)
{

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertionattail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// K-Rotation using vector  -> 
void krotate(vector<int> &nums, int k)
{

    int n = nums.size();
    // base case
    if (n == 0)
        return;
    if (k % n == 0)
        return;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;
}
Node *rotateRight(Node *head, int k)
{

    // base case
    if (head == nullptr || k == 0)
        return head;
    vector<int> nums;
    Node *temp = head;
    while (temp != nullptr)
    {
        nums.push_back(temp->val);
        temp = temp->next;
    }

    krotate(nums, k);

    int n = nums.size();
    Node *ans = new Node(0);
    Node *temp1 = ans;
    for (auto i : nums)
    {
        temp1->next = new Node(i);
        temp1 = temp1->next;
    }

    return ans->next;
}

int main()
{
    Node *node1 = new Node(1);
    Node *tail = node1;
    Node *head = node1;

    insertionattail(tail, 2);
    print(head);

    insertionattail(tail, 3);
    print(head);

    insertionattail(tail, 4);
    print(head);

    insertionattail(tail, 5);
    print(head);

    cout << "Original linked-list : " << endl;
    print(head);

    Node *head1 = rotateRight(head, 2);
    cout << "Linked-list after K-Rotation : " << endl;
    print(head1);

    return 0;
}