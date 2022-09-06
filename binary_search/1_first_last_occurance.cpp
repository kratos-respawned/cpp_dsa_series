#include <iostream>
using namespace std;
int main()
{

    int a[10] = {0, 1, 3, 4, 4, 4, 6, 8, 10, 12};
    // given a sorted array with repeating number
    // we have to find first and last occurance of a number
    int num = 4;
    // if does not exist then -1;
    int firstOccurance = -1;
    int lastOccurance = -1;
    int r = 0, l = 10 - 1;
    // approach first find the first occurance using binary search
    while (r <= l)
    {
        int mid = (r + l) / 2;
        if (a[mid] == num)
        {
            firstOccurance = mid;
            l = mid - 1;
        }
        else if (a[mid] > num)
        {
            l = mid - 1;
        }
        else if (a[mid] < num)
            r = mid + 1;
    }
    cout << "first occurance " << firstOccurance << endl;
    r = 0, l = 7 - 1;
    // then find the last occurance using binary search
    while (r <= l)
    {
        int mid = (r + l) / 2;
        if (a[mid] == num)
        {
            lastOccurance = mid;
            r = mid + 1;
        }
        else if (a[mid] > num)
        {
            l = mid - 1;
        }
        else if (a[mid] < num)
            r = mid + 1;
    }
    cout << "last occurance " << lastOccurance << endl;
}