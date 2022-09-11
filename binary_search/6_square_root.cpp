#include <iostream>
using namespace std;
double prec = 1e-08;
int main()
{
    int num;
    cout << "\n enter num :: ";
    cin >> num;
    double s = 0, e = num, mid;
    while ((e - s) > prec)
    {
        mid = (s + e) / 2;
        if ((mid * mid) > num)
            e = mid;
        else if ((mid * mid) < num)
            s = mid;
    }
    cout << mid;
}