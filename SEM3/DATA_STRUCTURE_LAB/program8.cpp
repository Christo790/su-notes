#include <iostream>
using namespace std;

void mergesort(int a[], int low, int high);
void mergearray(int a[], int low, int mid, int high);

int a[20], n;

int main() {
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergesort(a, 0, n - 1);

    cout << "The sorted array is:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    return 0;
}

void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);

        mergearray(a, low, mid, high);
    }
}

void mergearray(int a[], int low, int mid, int high) {
    int c[20], i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            c[k++] = a[i++];
        else
            c[k++] = a[j++];
    }

    while (i <= mid)
        c[k++] = a[i++];

    while (j <= high)
        c[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = c[i];
}