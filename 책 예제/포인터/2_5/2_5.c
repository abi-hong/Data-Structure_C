#include <stdio.h>
void printArray(int *ptr, int size);

void main()
{
    int i, num[10];
    for (i = 0; i < 10; i++)
    {
        num[i] = i;
    }
    printArray(num, 10);
}

void printArray(int *ptr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%8u %5d\t", ptr + i, *(ptr + 1)); //두번째 똑바로 안나온다.
        printf("%8u %5d\n", &ptr[i], ptr[i]);
    }
}