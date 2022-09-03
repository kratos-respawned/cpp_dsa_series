#include <iostream>
using namespace std;
int main()
{
    // given an array of n size with one every element repeating twice except two
    //  find those numbers
    int a[8] = {1, 3, 3, 2, 2, 1, 7, 6};

    // we can use xor here the repeating number will cancel each other
    int n = 0;
    for (int i = 0; i < 8; i++)
    {
        n ^= a[i];
    }
    // at the end n=6^7
    //  6 = 110 , 7=111 ==> 110^111=001
    // n=1
    int num1 = n, num2 = n;
    int mask = 1, count = 0;
    while ((n & 1) != 1)
    {
        ++count;
        n >>= 1;
    }
    // n&1 ==> 1&1==>1 loop will not work
    // because phli digit pe hi 1 hai n ki ==> count=0
    mask <<= count;
    // mask=1
    for (int i = 0; i < 8; i++)
        if ((mask & a[i]) == 0)
            num1 ^= a[i];
        else
            num2 ^= a[i];
    // now un digits ko separate krna hai jinke end pe 1 ho
    // num1= (6^7)^1^1^3^3^7==>6 // beacuse xor
    // aur unhe bhi separate krna hai jinke end pe 0 ho
    // num2= (6^7)^2^2^6==>7 //beacuse xor
    cout << "\n unique nums are :: " << num1 << " " << num2;
}