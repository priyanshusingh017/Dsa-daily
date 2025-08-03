# Stack Data Structure Notes

## Definition
A **stack** is a linear data structure that follows the **LIFO (Last In First Out)** principle - the last element added is the first one to be removed.

## Key Operations
| Operation  | Description                                   | Time Complexity |
|------------|----------------------------------------------|-----------------|
| `push(x)`  | Adds element `x` to the top of the stack     | O(1)            |
| `pop()`    | Removes and returns the top element          | O(1)            |
| `peek()`   | Returns the top element without removing it  | O(1)            |
| `isEmpty()`| Checks if the stack is empty                 | O(1)            |
| `isFull()` | Checks if the stack is full (array impl.)    | O(1)            |

## Implementations

### 1. Array Implementation (Static Size)
```cpp
#define MAX 1000

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }
    
    bool push(int x) {
        if (top >= MAX-1) {
            cout << "Stack Overflow";
            return false;
        }
        arr[++top] = x;
        return true;
    }
    
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow";
            return 0;
        }
        return arr[top--];
    }
    
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty";
            return 0;
        }
        return arr[top];
    }
    
    bool isEmpty() {
        return (top < 0);
    }
    
    bool isFull() {
        return (top == MAX-1);
    }
};
```

### 2. Linked List Implementation (Dynamic Size)

```cpp
class StackNode {
public:
    int data;
    StackNode* next;
    StackNode(int x) : data(x), next(nullptr) {}
};

class Stack {
    StackNode* top;
public:
    Stack() : top(nullptr) {}
    
    void push(int x) {
        StackNode* newNode = new StackNode(x);
        newNode->next = top;
        top = newNode;
    }
    
    int pop() {
        if (!top) {
            cout << "Stack Underflow";
            return INT_MIN;
        }
        StackNode* temp = top;
        top = top->next;
        int popped = temp->data;
        delete temp;
        return popped;
    }
    
    int peek() {
        if (!top) {
            cout << "Stack is Empty";
            return INT_MIN;
        }
        return top->data;
    }
    
    bool isEmpty() {
        return !top;
    }
};

```
## Applications

- **Function call stack**: Manages function calls and returns in recursion
- **Undo/Redo operations**: Stores states in text editors/graphic software
- **Expression evaluation**: Converts infix to postfix notation and evaluates
- **Syntax parsing**: Checks balanced parentheses in compilers
- **Backtracking**: Stores paths in maze-solving algorithms
- **Browser history**: Enables back/forward navigation
- **Memory management**: Manages memory allocation in programs

## Important Concepts
- **Stack Overflow**: Error when pushing to a full stack (fixed-size implementations)
- **Stack Underflow**: Error when popping from an empty stack
- **Call Stack**: Critical for recursion implementation
- **Auxiliary Structure**: Used in tree/graph traversals (DFS) and other algorithms

## Complexity Comparison
```

| Operation | Array Implementation | Linked List Implementation |
|-----------|----------------------|----------------------------|
| Push      | O(1)                 | O(1)                       |
| Pop       | O(1)                 | O(1)                       |
| Peek      | O(1)                 | O(1)                       |
| isEmpty   | O(1)                 | O(1)                       |
| isFull    | O(1)                 | N/A                        |

```

## When to Use Which Implementation

### Array Implementation
- ✅ When maximum size is known in advance  
- ✅ Better cache performance due to contiguous memory  
- ✅ Simpler implementation with fixed size  
- ❌ Limited by predefined capacity  
- ❌ Wastes memory if allocated size is not fully utilized  

### Linked List Implementation  
- ✅ When size is unpredictable  
- ✅ Handles frequent resizing naturally  
- ✅ More flexible for large/variable datasets  
- ❌ Higher memory overhead (stores pointers)  
- ❌ Poorer cache performance due to non-contiguous nodes  