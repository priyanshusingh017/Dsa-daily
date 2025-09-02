# Introduction
A linked list is a linear data structure where elements, called nodes, are stored in separate objects. Each node contains two fields: one for storing data and another for referencing the next node in the sequence. Unlike arrays, linked lists do not require contiguous memory allocation, allowing for efficient insertions and deletions.

There are several types of linked lists:

### 1. Singly Linked List
Each node contains data and a pointer to the next node. Traversal is possible only in one direction.

**Example (C++):**
```cpp
class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
```

### 2. Doubly Linked List
Each node contains data, a pointer to the next node, and a pointer to the previous node. Traversal is possible in both directions.

**Example (C++):**
```cpp
class DNode {
public:
    int data;
    DNode* next;
    DNode* prev;
    DNode(int val) : data(val), next(nullptr), prev(nullptr) {}
};
```

### 3. Circular Linked List
The last node points back to the first node, forming a circle. Can be singly or doubly linked.

**Example (C++):**
```cpp
class CNode {
public:
    int data;
    CNode* next;
    CNode(int val) : data(val), next(nullptr) {}
};
// To make it circular: lastNode->next = firstNode;
```

Linked lists are commonly used in scenarios where dynamic memory allocation and frequent modifications to the data structure are required.

## Example: Singly Linked List

Below is a simple example of a singly linked list node in C++:

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    // Creating nodes
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    // Linking nodes
    node1->next = node2;
    node2->next = node3;

    // Traversing the linked list
    Node* current = node1;
    while (current) {
        cout << current->data << endl;
        current = current->next;
    }

    // Free memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
```

**Output:**
```
10
20
30
```

This example demonstrates how each node stores data and a reference to the next node, forming a chain-like structure.