#include<iostream>
#include<queue>
using namespace std;
class Circularqueue{

    int *arr;
    int front ;
    int rear;
    int size;

    public:
    Circularqueue(int n){
        size = n;
        arr = new int [size];
        front = rear = -1;
    }

    bool enqueue(int value){
            // Correct full condition
            if ((front == 0 && rear == size-1) || (rear == (front-1+size)%size)) {
                cout << "Queue is full" << endl;
                return false;
            }
            else if (front == -1) {
                front = rear = 0;
            }
            else if (rear == size-1 && front != 0) {
                rear = 0;
            }
            else {
                rear++;
            }
            arr[rear] = value;
            return true;
    }

    int dequeue(){
            if (front == -1) {
                cout << "Queue is empty " << endl;
                return -1;
            }
            int ans = arr[front];
            arr[front] = -1;
            if (front == rear) {
                // Only one element was present
                front = rear = -1;
            }
            else if (front == size-1) {
                front = 0;
            }
            else {
                front++;
            }
            return ans;
    }
};

int main(){
    Circularqueue cq(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60); // Should show queue is full
    cout << "Dequeued: " << cq.dequeue() << endl;
    cout << "Dequeued: " << cq.dequeue() << endl;
    cq.enqueue(60);
    cq.enqueue(70); // Should show queue is full again
    cout << "Dequeued: " << cq.dequeue() << endl;
    cout << "Dequeued: " << cq.dequeue() << endl;
    cout << "Dequeued: " << cq.dequeue() << endl;
    cout << "Dequeued: " << cq.dequeue() << endl; // Should show queue is empty
    return 0;
}