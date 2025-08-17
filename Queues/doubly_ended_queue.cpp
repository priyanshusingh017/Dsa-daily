#include<iostream>
#include<queue>
using namespace std;
//doubly ended queue - push and pop operation done by both side.

class Deque{
    int *arr;
    int front;
    int rear ;
    int size;
    public:

    Deque(int n){
        size =n;
        arr = new int[size];
        front = -1;
        rear =-1;
    }
    bool pushfront(int x){
            if ((front == 0 && rear == size-1) || (rear == (front-1+size)%size)) {
                return false;
            }
            else if (front == -1) {
                front = rear = 0;
            }
            else if (front == 0 && rear != size-1) {
                front = size-1;
            }
            else {
                front--;
            }
            arr[front] = x;
            return true;
    }
    bool pushrear(int x){
       if ((front == 0 && rear == size-1) || (rear == (front-1+size)%size)) {
            return false;
        }
        else if(front == -1){
            front = rear =0;
        }
        else if (rear == size -1 && front != 0){
            rear =0;;
        }
        else{
            rear ++;
        }
        arr[rear]=x;
        return true;
    }

    int popfront(){
            if (front == -1) {
                cout << "Queue is empty " << endl;
                return -1;
            }
            int ans = arr[front];
            arr[front] = -1;
            if (front == rear) {
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

    int poprear(){
            if (front == -1) {
                cout << "Queue is empty " << endl;
                return -1;
            }
            int ans = arr[rear];
            arr[rear] = -1;
            if (front == rear) {
                front = rear = -1;
            }
            else if (rear == 0) {
                rear = size-1;
            }
            else {
                rear--;
            }
            return ans;
    }
    int getfront(){
        if(isempty()){
            return -1;
        }
        return arr[front];
    }

    int getrear(){
        if(isempty()){
            return -1;
        }
        return arr[rear];
    }

    bool isempty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if((front == 0 && rear == size-1) || (rear == (front-1+size)%size)) {
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Deque dq(5);
    dq.pushrear(10);
    dq.pushrear(20);
    dq.pushfront(5);
    dq.pushrear(30);
    dq.pushfront(1);
    cout << "Is full? " << (dq.isfull() ? "Yes" : "No") << endl;
    cout << "Front: " << dq.getfront() << ", Rear: " << dq.getrear() << endl;
    cout << "Pop front: " << dq.popfront() << endl;
    cout << "Pop rear: " << dq.poprear() << endl;
    cout << "Front: " << dq.getfront() << ", Rear: " << dq.getrear() << endl;
    dq.popfront();
    dq.poprear();
    dq.popfront(); // Should show queue is empty
    cout << "Is empty? " << (dq.isempty() ? "Yes" : "No") << endl;
    return 0;
}