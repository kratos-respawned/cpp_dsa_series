#include <iostream>
using namespace std;
int main()
{
    // give two sorted array a and b of equal size
    // print a third array which is intersection of a and b
    // a= [1,2,3] , b=[2,4,6]==> c=[2]
    int a[] = {9, 9, 10}, b[] = {9, 10, 11};
    int c[3], i = 0, j = 0;
    int k = 0;
    while (i < 3 && j < 3)
    {
        if (a[i] == b[j])
        {
            c[k++] = a[i];
            ++i;
            ++j;
        }
        else if (b[j] > a[i])
        {
            ++i;
        }
        else if (a[i] > b[j])
            ++j;
    }
    cout << "\n intersection :: ";
    for (i = 0; i < k; i++)
        cout << c[i] << " ";
}