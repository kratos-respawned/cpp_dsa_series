#include <iostream>
using namespace std;
int binarySearch(int[], int, int, int);
int main()
{
    // a rotated array is given and we've to search a number inside it
    int a[5] = {6, 7, 3, 4, 5};
    int num = 2;
    // my approach :: find the pivot element break the array in to halves and perform binary search
    int s = 0, e = 5 - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (mid == s)
            break;
        if (a[mid] > a[s])
            s = mid;
        else if (a[mid] < a[s])
            e = mid;
    }
    // now pivot is found perform binary search
    int pos = -1;
    if (num >= a[0] && num <= a[s])
        pos = binarySearch(a, 0, s, num);
    else if (num >= a[e] && num <= a[5 - 1])
        pos = binarySearch(a, e, 5 - 1, num);
    if (pos != -1)
        cout << pos;
    else
        cout << "num not found";
}

int binarySearch(int a[], int s, int e, int num)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] > num)
        {
            e = mid - 1;
        }
        else if (a[mid] < num)
            s = mid + 1;
        else
        {
            return mid;
        }
    }
    return -1;
}