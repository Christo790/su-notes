#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 5

class Queue {
private:
    int q[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void qinsert() {
        int num;

        if (rear == SIZE - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }

        cout << "Enter the element to be inserted: ";
        cin >> num;

        if (front == -1)
            front = 0;

        q[++rear] = num;
    }

    void qdelete() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "The deleted element is: " << q[front++] << endl;

        if (front > rear) {
            // Reset the queue
            front = rear = -1;
        }
    }

    void qdisplay() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "The elements in the queue are: ";
        for (int i = front; i <= rear; i++) {
            cout << q[i] << "\t";
        }

        cout << endl;
    }
};

int main() {
    Queue q;
    int ch;

    do {
        cout << "\n****** MENU ******\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                q.qinsert();
                break;

            case 2:
                q.qdelete();
                break;

            case 3:
                q.qdisplay();
                break;

            case 4:
                cout << "Exiting program.\n";
                exit(0);

            default:
                cout << "Invalid choice\n";
        }
    } while (true);

    return 0;
}