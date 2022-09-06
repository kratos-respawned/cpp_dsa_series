#include <iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
}
int main()
{
    int a[7] = {2, 1, 0, 0, 1, 2, 1};
    int x = 0, y = 7 / 2, z = 7 - 1;
    while (y < z)
    {
        if (a[y] == 2)
        {

            swap(a[y], a[z]);
        }
        else if (a[y] == 0)
        {

            swap(a[x], a[y]);
        }
        else
        {
            --z;
            ++x;
            cout << "\n x :: " << x << " y :: " << y << " z :: " << z << endl;
        }
        display(a, 7);
        cout << "\n";
    }
    display(a, 7);
}