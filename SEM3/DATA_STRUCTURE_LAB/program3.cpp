#include <iostream>
using namespace std;

class Bubble
{
    int a[15], n;

public:
    void getdata()
    {
        cout << "Enter number of elements (max 15): ";
        cin >> n;

        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void sort()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    void display()
    {
        cout << "Sorted elements: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }
};

int main()
{
    Bubble b;

    b.getdata();
    b.sort();
    b.display();

    return 0;
}
