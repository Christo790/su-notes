#include <iostream>
using namespace std;

int main() {
    int n, max, min;

    cout << "Enter size of the array: ";
    cin >> n;

    int* arr = new int[n];   // Dynamic array

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max = min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

    delete[] arr;   // Free memory

    return 0;
}