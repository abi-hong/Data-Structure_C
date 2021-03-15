//팩토리얼
#include <stdio.h>
void factorial(int n);

void main()
{
    factorial(100);
}

void factorial(int n)
{
    unsigned long long sum, j;
    for (int i = 2; i <= n; i++)
    {
        sum = 1;
        for (j = 2; j <= i; j++)
        {
            sum = sum * j;
        }
        printf("%d! = %llu\n", i, sum);
    }
}
