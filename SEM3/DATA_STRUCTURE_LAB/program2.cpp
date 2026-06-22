#include <iostream>
using namespace std;

class insert
{
public:
    void getdata();
    void sort();
    void display();

private:
    int i, temp, j, n, a[15];
};

void insert::getdata()
{
    cout << "Enter the range" << endl;
    cin >> n;

    cout << "Enter the elements" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
}

void insert::sort()
{
    for (i = 1; i <= n - 1; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }
}

void insert::display()
{
    cout << "Sorted elements are:" << endl;

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    insert t;

    t.getdata();
    t.sort();
    t.display();

    return 0;
}
