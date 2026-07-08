9. Write a C++ program to sort the given list using the quick sort technique.
 
#include <iostream>
using namespace std;
 
int a[50], n;
 
int partition(int a[], int low, int high);
void quicksort(int a[], int low, int high);
 
int main() {
   cout << "Enter number of elements: ";
   cin >> n;
 
   cout << "Enter the elements:\n";
   for (int i = 0; i < n; i++)
       cin >> a[i];
 
   quicksort(a, 0, n - 1);
 
   cout << "Elements in sorted order:\n";
   for (int i = 0; i < n; i++)
       cout << a[i] << " ";
 
   cout << endl;
   return 0;
}
 
void quicksort(int a[], int low, int high) {
   if (low < high) {
       int loc = partition(a, low, high);
       quicksort(a, low, loc - 1);
       quicksort(a, loc + 1, high);
   }
}
 
int partition(int a[], int low, int high) {
   int pivot = a[low], i = low + 1, j = high, temp;
 
   while (true) {
       while (i <= high && a[i] <= pivot) i++;
       while (a[j] > pivot) j--;
 
       if (i < j) {
           swap(a[i], a[j]);
       } else {
           swap(a[low], a[j]);
           return j;
       }
   }
}