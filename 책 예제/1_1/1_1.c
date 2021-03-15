//소수 찾기
#include <stdio.h>
void prime_number(int num);

void main()
{
    int maxnum = 1000;
    prime_number(maxnum);
}

void prime_number(int num)
{
    int prime, i, j;

    for (i = 2; i <= num; i++)
    {
        prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
}