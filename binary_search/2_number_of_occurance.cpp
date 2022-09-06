#include <iostream>
using namespace std;
int main()
{
    /// approach find the first and last occurance using binary search and subtract it
    int a[10] = {0, 1, 3, 4, 4, 4, 6, 8, 10, 12};
    // last occ-first occ+1= 5-3+1=2;
    // given a sorted array with repeating number
    // we have to find first and last occurance of a number
    int num = 4;
    // if does not exist then -1;
    int firstOccurance = -1;
    int lastOccurance = -1;
    int r = 0, l = 10 - 1;
    //  find the first occurance using binary search
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
    if (firstOccurance == -1)
    {
        return 0;
    }
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
    cout << "total occurance " << lastOccurance - firstOccurance + 1 << endl;
}