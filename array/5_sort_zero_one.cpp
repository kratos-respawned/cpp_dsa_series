#include <iostream>
using namespace std;
int main()
{
    // given an array containing 0 and 1
    // we have to sort the array
    int a[6] = {0, 1, 0, 1, 0, 1};
    // approach one :: we can sort the  array ==> O(nlogn)
    //  approach two :: we can count the 0s and 1s and then rewrite them ==> O(2n)
    //  approach three :: two pointer approach ==> O(n) ig
    int p1 = 0,
        p2 = 5;
    while (p1 < p2)
    {
        if (a[p1] == 1 && a[p2] == 0)
        {
            swap(a[p1], a[p2]);
            ++p1;
            --p2;
        }
        else if (a[p1] == 0 && a[p2] == 0)
        {
            ++p1;
        }
        else if (a[p1] == 1 && a[p2] == 1)
        {
            --p2;
        }
        else
        {
            ++p1;
            --p2;
        }
    }
    cout << "\n sorted array :: ";
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";
}