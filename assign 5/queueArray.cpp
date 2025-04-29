#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    Queue(int s) {
        size = s;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    void enqueue(int value) {
        if (rear == size - 1) {
            cout << "Queue Overflow! Cannot enqueue " << value << "." << endl;
        } else {
            if (front == -1) {
                front = 0; 
            }
            rear++;
            arr[rear] = value; 
            cout << value << " enqueued into the queue." << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Cannot dequeue from an empty queue." << endl;
        } else {
            cout << arr[front] << " dequeued from the queue." << endl;
            front++;
            if (front > rear) {
                front = rear = -1;
            }
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "The queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int queueSize;
    cout << "Enter the size of the queue: ";
    cin >> queueSize;

    Queue myQueue(queueSize);

    int choice, value;

    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter a value to enqueue: ";
            cin >> value;
            myQueue.enqueue(value);
            break;
        case 2:
            myQueue.dequeue();
            break;
        case 3:
            myQueue.display();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

/*
Enter the size of the queue: 4
8 enqueued into the queue.
2 enqueued into the queue.
9 enqueued into the queue.
4 enqueued into the queue.

Queue elements: 8 2 9 4 
8 dequeued from the queue.\

Queue elements: 2 9 4 
*/