# Queues - Notes

## Overview
A **queue** is a linear data structure that follows the **First-In-First-Out (FIFO)** principle. Elements are added at the rear (enqueue) and removed from the front (dequeue).

## Basic Operations
1. **Enqueue** - Add an element to the rear of the queue
2. **Dequeue** - Remove an element from the front of the queue
3. **Peek/Front** - View the front element without removing it
4. **IsEmpty** - Check if the queue is empty
5. **IsFull** - Check if the queue is full (for fixed-size implementations)

## Time Complexity
| Operation | Time Complexity |
|-----------|-----------------|
| Enqueue   | O(1)            |
| Dequeue   | O(1)            |
| Peek      | O(1)            |
| Search    | O(n)            |

## Implementation
## 1. Simple Queue Implementation using Array
```cpp
class ArrayQueue {
private:
    int *arr;
    int front, rear, capacity;
    
public:
    ArrayQueue(int size) {
        capacity = size;
        arr = new int[size];
        front = rear = -1;
    }
    
    ~ArrayQueue() {
        delete[] arr;
    }
    
    bool isFull() {
        return (rear + 1) % capacity == front;
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        arr[rear] = item;
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
        int item = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        return item;
    }
    
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
        return arr[front];
    }
};
```
## 2. Queue using Linked List
```cpp
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedListQueue {
private:
    Node *front, *rear;
    
public:
    LinkedListQueue() : front(nullptr), rear(nullptr) {}
    
    bool isEmpty() {
        return front == nullptr;
    }
    
    void enqueue(int item) {
        Node* newNode = new Node(item);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
        Node* temp = front;
        int item = temp->data;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        return item;
    }
    
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
        return front->data;
    }
};
```
# Queues - Comprehensive Notes

## Types of Queues

### 1. Simple Queue
- Basic FIFO (First-In-First-Out) structure
- Elements added at rear, removed from front
- Linear data structure

### 2. Circular Queue
- Last element points to the first (circular buffer)
- Efficient space utilization
- Fixed size but reuses empty spaces
- Formula: `rear = (rear + 1) % capacity`

### 3. Priority Queue
- Elements dequeued based on priority
- Two variants:
  - Min-Priority: Lower values have higher priority
  - Max-Priority: Higher values have higher priority
- Typically implemented with heaps (O(log n) operations)

### 4. Double-Ended Queue (Deque)
- Allows insertion/removal from both ends
- Pronounced "deck"
- Hybrid of stack and queue
- Four basic operations:
  - `addFront()`, `addRear()`
  - `removeFront()`, `removeRear()`

### 5. Blocking Queue
- Thread-safe implementation
- Blocks when:
  - Trying to dequeue from empty queue
  - Trying to enqueue to full queue
- Essential for producer-consumer problems

## Applications

### System Operations
- **CPU Scheduling**: Process scheduling (e.g., Round Robin)
- **Disk Scheduling**: I/O request handling
- **OS Interrupts**: Handling hardware interrupts

### Algorithms
- **BFS (Breadth-First Search)**: Level-order traversal
- **Cache Algorithms**: LRU Cache implementation
- **Sliding Window Problems**: Maximum of subarrays

### Real-World Systems
- **Call Centers**: Call waiting systems
- **Printers**: Job scheduling
- **Data Buffers**: Pipes, IO buffers, live data streams

## Common Problems

### Classic Problems
1. **Implement Stack using Queues**
   - Version A: Using 2 queues (push O(n), pop O(1))
   - Version B: Using 1 queue (push O(1), pop O(n))

2. **Reverse a Queue**
   - Using stack (temporary storage)
   - Recursive approach (call stack)

3. **Generate Binary Numbers 1 to n**
   - Using queue to generate numbers
   - Pattern: Enqueue "1", then append "0" and "1" repeatedly

### Advanced Problems
4. **LRU Cache Implementation**
   - Queue + Hash Map combination
   - O(1) get and put operations

5. **Sliding Window Maximum**
   - Deque-based O(n) solution
   - Maintain decreasing order in deque
