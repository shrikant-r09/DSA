#include <iostream>
using namespace std;

void pop(int stack[], int &top) {
    if (top == -1) {
        cout << "UNDERFLOW! The stack is empty." << endl;
        return;
    }

    int item = stack[top];
    cout << item << " popped from the stack." << endl;
    top--; 
}

void displayStack(int stack[], int top) {
    if (top == -1) {
        cout << "The stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int maxstk;
    cout << "Enter the maximum size of the stack: ";
    cin >> maxstk;

    int stack[maxstk]; 
    int top = -1;      

    cout << "Enter elements to fill the stack (maximum " << maxstk << " elements):" << endl;
    for (int i = 0; i < maxstk; i++) {
        int item;
        cout << "Enter element " << i + 1 << ": ";
        cin >> item;
        top++;
        stack[top] = item; 
    }

    cout << "Stack is now full. Displaying the complete stack:" << endl;
    displayStack(stack, top);

    
    int choice;
    do {
        cout << "\nStack Operations:\n";
        cout << "1. Pop\n";
        cout << "2. Display\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            pop(stack, top); 
            break;
        case 2:
            displayStack(stack, top); 
            break;
        case 3:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

/*
Enter the maximum size of the stack: 
4
Enter elements to fill the stack (maximum 4 elements):
Enter element 1: 1
Enter element 2: 5
Enter element 3: 9
Enter element 4: 4
Stack is now full. Displaying the complete stack:

Stack elements: 1 5 9 4
4 popped from the stack.

Stack elements: 1 5 9
*/