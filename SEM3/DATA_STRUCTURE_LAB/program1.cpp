#include <iostream>
using namespace std;

class Select
{
    int a[15], n, i, j, pos;

public:
    void getdata()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter the elements:" << endl;
        for (i = 0; i < n; i++)
            cin >> a[i];
    }

    void sort()
    {
        for (i = 0; i < n - 1; i++)
        {
            pos = i;

            for (j = i + 1; j < n; j++)
            {
                if (a[j] < a[pos])
                    pos = j;
            }

            if (pos != i)
                swap(a[i], a[pos]);
        }
    }

    void display()
    {
        cout << "Sorted elements:" << endl;

        for (i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }
};

int main()
{
    Select s;

    s.getdata();
    s.sort();
    s.display();

    return 0;
}
