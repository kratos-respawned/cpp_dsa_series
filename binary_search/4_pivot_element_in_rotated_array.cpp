#include <iostream>
using namespace std;
int main()
{
    // rotated array = 1,2,3,4,5 (sorted)  ==>> 5,1,2,3,4
    int a[5] = {6, 7, 8, 3, 4};
    // pivot point = 3 or 8 (depends on question) here pivot = 3;
    // dekho ek rotated array me first element last element se to hmesha bda hi hoga
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
    // if pivot is smaller num
    cout << "index of pivot element " << e;
    // if pivot is bigger num
    // cout << a[s];
}