//Queue implementation using array
#include <iostream>
using namespace std;
class Queue {
    int a[100];
    int front, rear;
    public :
    Queue() {
        front = rear = -1;
    }
void enqueue(int value) {
    if (rear == 99) {
        cout << "Queue is full" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    a[rear] = value;
}

void dequeue(){
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << a[front]<<" deleted ";
    front++;
    if (front > rear) {
        front = rear = -1;
    }   
}
void show () {
    if (front == -1) {
        cout << "\nQueue is empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void getfront()
{
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front element: " << a[front] << endl;
}

void getrear()
{
    if (rear == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Rear element: " << a[rear] << endl;
}
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);  
    q.enqueue(30);
    q.show();
    q.dequeue();
    q.show();
    q.getfront();
    q.getrear();
    return 0;
}