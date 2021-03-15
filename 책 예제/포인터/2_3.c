#include <stdio.h>
void pointer(int i, int *q);

void main()
{
    int i = 5, j;
    int *p;
    p = &i;
    j = (*p) + 1;
    pointer(*p, &j);
    p = &j;
    printf("%d %d %d\n", i, j, *p);
}

void pointer(int i, int *q)
{
    i++;
    *q = (*q) + 1;
    printf("%d %d\n", i, *q);
}