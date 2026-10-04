// Write a C++ program to insert elements into linked list and display the elements.
#include <iostream>
using namespace std;
 
struct Node {
   int data;
   Node* next;
};
 
typedef Node* NODE;  // Alias for Node pointer
 
// Function to insert a node at the end
void insertEnd(NODE& head, int value) {
   NODE newNode = new Node;
   newNode->data = value;
   newNode->next = nullptr;
 
   if (head == nullptr) {
       head = newNode;  // first node
   } else {
       NODE temp = head;
       while (temp->next != nullptr) {
           temp = temp->next;
       }
       temp->next = newNode;
   }
}
 
// Function to display the linked list
void displayList(NODE head) {
   cout << "Linked List: ";
   while (head != nullptr) {
       cout << head->data << " -> ";
       head = head->next;
   }
   cout << "NULL" << endl;
}
 
int main() {
   NODE head = nullptr;
   int n, value;
 
   cout << "How many values do you want to insert? ";
   cin >> n;
 
   for (int i = 0; i < n; i++) {
       cout << "Enter value " << i + 1 << ": ";
       cin >> value;
       insertEnd(head, value);
   }
 
   displayList(head);
   return 0;
}