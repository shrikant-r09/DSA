#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int size;
    int* arr;
public:
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[size];
    }

    // Push 
        void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow! Cannot push " << value << "." << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into the stack." << endl;
        }
    }

    // Pop 
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
        } else {
            cout << arr[top] << " popped from the stack." << endl;
            top--;
        }
    }

    // Peek 
    void peek() {
        if (top == -1) {
            cout << "The stack is empty." << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // Display
    void display() {
        if (top == -1) {
            cout << "The stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // Destructor to clean up memory
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    int stackSize;
    cout << "Enter the size of the stack: ";
    cin >> stackSize;

    Stack myStack(stackSize);

    int choice, value;

    // Menu-driven program
    do {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter a value to push: ";
            cin >> value;
            myStack.push(value);
            break;
        case 2:
            myStack.pop();
            break;
        case 3:
            myStack.peek();
            break;
        case 4:
            myStack.display();
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}