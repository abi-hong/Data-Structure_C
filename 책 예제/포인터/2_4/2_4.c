#define ARRAY_SIZE 100
int arraySum(int num[], int n);

void main(void)
{
    int i, num[ARRAY_SIZE], result;
    for (i = 0; i < ARRAY_SIZE; i++)
        num[i] = i;
    result = arraySum(num, ARRAY_SIZE);
    printf("The sum is: %d\n", result);
}

int arraySum(int num[], int n)
{
    int i, temp;
    for (i = 0; i < n; i++)
    {
        temp += num[i];
    }
    return temp;
}
