//#include <iostream>
using namespace std;

void towers(int n, char start, char aux, char end) {
    if (n == 1) {
        cout << "Move disk 1 from " << start << " to " << end << endl;
        return;
    }

    towers(n - 1, start, end, aux);
    cout << "Move disk " << n << " from " << start << " to " << end << endl;
    towers(n - 1, aux, start, end);
}

int main() {
    int n;

    cout << "Enter the number of disks: ";
    cin >> n;

    towers(n, 'A', 'B', 'C');

    return 0;
}