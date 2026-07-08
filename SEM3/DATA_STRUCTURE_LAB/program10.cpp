#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 5

class Stack {
private:
    int s[SIZE], n, top;

public:
    Stack() {
        top = -1;
    }

    void push() {
        if (top >= SIZE - 1) {
            cout << "STACK IS OVERFLOW" << endl;
            return;
        }

        cout << "Enter the element: ";
        cin >> n;
        s[++top] = n;
    }

    void pop() {
        if (top == -1) {
            cout << "STACK IS UNDERFLOW" << endl;
            return;
        }

        cout << "THE DELETED ELEMENT IS: " << s[top--] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "STACK IS EMPTY" << endl;
            return;
        }

        cout << "STACK ELEMENTS ARE:\n";
        for (int i = top; i >= 0; i--)
            cout << s[i] << endl;
    }
};

int main() {
    Stack stack;
    int ch;

    do {
        cout << "\nSTACK MENU\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                stack.push();
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.display();
                break;

            case 4:
                cout << "Exiting program.\n";
                exit(0);

            default:
                cout << "INVALID CHOICE\n";
        }
    } while (true);

    return 0;
}