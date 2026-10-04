//Write a C++ program to implement a circular queue using an array.
#include <iostream>
#define MAX 5
using namespace std;
 
class CQueue {
private:
   int cq[MAX], front, rear;
 
public:
   CQueue() {
       front = rear = -1;
   }
 
   void cqinsert();
   void cqdelete();
   void cqdisplay();
};
 
void CQueue::cqinsert() {
   int num;
   if ((rear + 1) % MAX == front) {
       cout << "Circular Queue Overflow" << endl;
       return;
   }
 
   cout << "Enter the element to be inserted: ";
   cin >> num;
 
   if (front == -1) front = 0;
   rear = (rear + 1) % MAX;
   cq[rear] = num;
}
 
void CQueue::cqdelete() {
   int num;
   if (front == -1) {
       cout << "Circular Queue Underflow" << endl;
       return;
   }
 
   num = cq[front];
   if (front == rear) {
       front = rear = -1;
   } else {
       front = (front + 1) % MAX;
   }
   cout << "The deleted element is: " << num << endl;
}
 
void CQueue::cqdisplay() {
   if (front == -1) {
       cout << "Circular Queue is empty" << endl;
       return;
   }
 
   cout << "Elements in the Queue are: ";
   int i = front;
   while (true) {
       cout << cq[i] << "\t";
       if (i == rear) break;
       i = (i + 1) % MAX;
   }
   cout << endl;
}
 
int main() {
   CQueue c;
   int ch;
 
   do {
       cout << "\n***** MENU *****\n";
       cout << "1. Insert\n";
       cout << "2. Delete\n";
       cout << "3. Display\n";
       cout << "4. Exit\n";
       cout << "Enter your choice: ";
       cin >> ch;
 
       switch (ch) {
           case 1:
               c.cqinsert();
               break;
           case 2:
               c.cqdelete();
               break;
           case 3:
               c.cqdisplay();
               break;
           case 4:
               exit(0);
           default:
               cout << "Invalid choice" << endl;
       }
   } while (true);
 
   return 0;
}