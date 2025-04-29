#include <iostream>
using namespace std;

void push(int stack[], int &top, int maxstk, int item) {
    if (top == maxstk) {
        cout << "OVERFLOW! Cannot push " << item << "." << endl;
        return;
    }

    top++;            
    stack[top] = item; 
    cout << item << " pushed into the stack." << endl;
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
        push(stack, top, maxstk - 1, item); 
    }

    cout << "Stack is now full. Displaying the complete stack:" << endl;
    displayStack(stack, top);

    return 0;
}

/*
Enter element 1: 5
5 pushed into the stack.
Enter element 2: 6
6 pushed into the stack.
Enter element 3: 4
4 pushed into the stack.
Enter element 4: 2
2 pushed into the stack.
Stack is now full. Displaying the complete stack:
Stack elements: 5 6 4 2  */