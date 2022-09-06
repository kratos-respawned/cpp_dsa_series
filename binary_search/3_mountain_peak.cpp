#include <iostream>
using namespace std;
int main()
{
    int r = 0, l = 8 - 1;
    int a[8] = {2, 8, 7, 5, 4, 3, 2, 1};
    // given an array first ascending then decending
    // we've to find the peak element
    int peak = 1;
    while (r <= l)
    {
        int mid = (r + l) / 2;
        if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
        {
            peak = mid;
            break;
        }
        else if (a[mid] > a[mid - 1])
        {
            r = mid - 1;
        }
        else if (a[mid] > a[mid + 1])
        {
            l = mid + 1;
        }
    }
    cout << peak;
}