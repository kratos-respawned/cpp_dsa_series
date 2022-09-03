#include <stdio.h>
int main()
{
    int n;
    printf("\n enter number :: ");
    scanf("%d", &n);
    int revNum = 0;
    while (n > 0)
    {
        if (revNum > __INT32_MAX__ / 10)
        {
            printf("0");
            return 0;
        }

        revNum = ((revNum * 10) + n % 10);
        n /= 10;
    }
    printf("\n reverse num :: %d ", revNum);
}