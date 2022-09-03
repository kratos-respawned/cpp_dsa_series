#include <stdio.h>
int main()
{
    int n, mask = 0;
    printf("\n enter n :: ");
    scanf("%d", &n);
    // let n= 5 : 0000000 101
    int complement = n;
    while (n > 0)
    {
        // mask : 00000000000000
        mask = (mask << 1) | 1;
        //  mask : 0000000000001
        n = n >> 1;
    }
    // mask : 000000000 111
    complement = ~complement;
    //  complement : 1111111 010
    complement = complement & mask;
    // complement = 1111111 010
    //            & 0000000 111
    // complement = 0000000 010 :: 2
    printf("complement ::  %d", complement);
}