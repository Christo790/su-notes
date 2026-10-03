//5. Write a C++ Program to search an element using binary search technique.
#include <iostream>
#include <iomanip>
using namespace std;
int a[15], n;
void getdata() {
 cout << "Enter the number of elements: ";
 cin >> n;
 cout << "Enter the elements:\n";
 for (int i = 0; i < n; i++) cin >> a[i];
}
void sort() {
 for (int i = 0; i < n - 1; i++)
 for (int j = 0; j < n - i - 1; j++)
 if (a[j] > a[j + 1])
 swap(a[j], a[j + 1]);
 cout << "Sorted elements:\n";
 for (int i = 0; i < n; i++)
 cout << setw(5) << a[i] << endl;
}
void bsearch() {
 int key, mid, lb = 0, ub = n - 1;
 cout << "Enter the element to search: ";
 cin >> key;
 while (lb <= ub) {
 mid = (lb + ub) / 2;
 if (a[mid] == key) {
 cout << "Element found at position " << mid << endl;
 return;
 }
 (key > a[mid]) ? lb = mid + 1 : ub = mid - 1;
 }
 cout << "Element not found\n";
}
int main() {
 getdata();
 sort();
 bsearch();
 return 0;
}
