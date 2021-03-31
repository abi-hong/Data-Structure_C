#include <stdio.h>
#define exchange(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void word(char *letter, int i, int n);

int start = 0, end = 3;

void main()
{
    char letter[] = {'S', 'M', 'W', 'U', 'T'};

    scanf("%d", &start);
    scanf("%d", &end);
    word(letter, start, end);
}

void word(char *letter, int i, int n)
{
    int j, temp;
    if (i == n)
    {
        for (j = start; j <= n; j++)
            printf("%c", letter[j]);
        printf("\n");
    }
    else
    {
        for (j = i; j <= n; j++)
        {
            exchange(letter[i], letter[j], temp);
            word(letter, i + 1, n);
            exchange(letter[i], letter[j], temp);
        }
    }
}

/*#include<stdio.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

void main()
{
	int a = 3, b = 5,t;

	printf("%d %d\n", a, b);
	SWAP(a, b, t);
	printf("%d %d\n", a, b);
}*/