#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 101
#define exchange(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

void shuffle(char symbol[], int i, int n);
int count = 1, start, end;

void main(void)
{
    char symbol[] = {'a', 'b', 'c', 'd', 'e'};

    while (start != -1 && end != -1)
    {
        printf("\n");
        printf("input two values for start and end positions : ");
        scanf("%d %d", &start, &end);
        shuffle(symbol, start, end);
    }
    return;
}

void shuffle(char symbol[], int i, int n)
{
    int j, temp;
    if (i == n)
    {
        printf("[%3d] ", count);
        for (j = start; j <= n; j++)
        {
            printf("%c", symbol[j]);
        }
        count++;
        if (count % 5 == 1)
            printf("\n");
        //printf("\n");
    }
    else
    {
        for (j = i; j <= n; j++)
        {
            exchange(symbol[i], symbol[j], temp);
            shuffle(symbol, i + 1, n);
            exchange(symbol[i], symbol[j], temp);
        }
    }
}