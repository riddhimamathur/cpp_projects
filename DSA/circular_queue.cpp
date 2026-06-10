#include <iostream>
using namespace std;    
class CircularQueue {
    private :
    int *arr;
    int front, rear,size;
    public :
    CircularQueue() {
        size = 5;
        arr = new int[size];
        front = rear = -1;
    
    }
    bool isempty() {
        return (front == -1);
    }
    bool isfull() {
        return ((rear + 1) % size == front);
    }
    void enqueue(int value) {
        if (isfull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front==-1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = value;
        cout << value << " enqueued " << endl;
    }
    void dequeue() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front] << " dequeued " << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    };

    void peek() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }
    void display() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) {
                break;
            }
            i = (i + 1) % size;
        }
        cout << endl;
    }
    ~CircularQueue() {
        delete[] arr;
    }};
    int main() {
    CircularQueue q;
    q.enqueue(27);
    q.enqueue(28);
    q.enqueue(31);
    q.enqueue(33);
    q.display();
    q.dequeue();
    q.enqueue(2704);
    q.dequeue();
    q.display();
    q.enqueue(3110);
    q.display();
    q.peek();
    return 0;
    }

        
    