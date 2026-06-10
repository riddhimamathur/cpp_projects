#include <iostream>
using namespace std;

class PriorityQueue {
private:
    int data[100];
    int priority[100];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int value, int pr) {
        int i = size - 1;

        while (i >= 0 && priority[i] < pr) {
            data[i + 1] = data[i];
            priority[i + 1] = priority[i];
            i--;
        }

        data[i + 1] = value;
        priority[i + 1] = pr;

        size++;

        cout << value << " inserted with priority "
             << pr << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Priority Queue Empty!" << endl;
            return;
        }

        cout << "Deleted: " << data[0] << endl;

        for (int i = 0; i < size - 1; i++) {
            data[i] = data[i + 1];
            priority[i] = priority[i + 1];
        }

        size--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Priority Queue Empty!" << endl;
            return;
        }

        cout << "Highest Priority Element: "
             << data[0]
             << " (Priority: "
             << priority[0]
             << ")" << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Priority Queue Empty!" << endl;
            return;
        }

        cout << "\nQueue Contents:\n";

        for (int i = 0; i < size; i++) {
            cout << "Value = " << data[i]
                 << ", Priority = "
                 << priority[i]
                 << endl;
        }
    }
};

int main() {

    PriorityQueue pq;

    pq.enqueue(100, 2);
    pq.enqueue(270, 3);
    pq.enqueue(2704, 1);
    pq.enqueue(3110, 9);
    pq.enqueue(30, 6);
    pq.enqueue(2804, 4);

    pq.display();

    pq.peek();

    pq.dequeue();

    pq.display();

    return 0;
}