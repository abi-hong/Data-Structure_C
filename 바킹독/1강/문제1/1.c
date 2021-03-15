//시간, 공간 복잡도
#include <stdio.h>

int func1(int N) //O(N)
{
    int n;
    int sum = 0;
    for (int i = 1; (N > 3 * i); i++)
    {
        sum += (3 * i);
    }
    for (int i = 1; (N > 5 * i); i++)
    {
        sum += (5 * i);
    }
    for (int i = 1; N > (15 * 1); i++)
    {
        sum -= (15 * i);
    }
    return sum;
}

int fun1_teach(int N)
{
    int ret = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            ret += i;
    }
    return ret;
}

int func2(int arr[], int N) //O(N^2)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] + arr[j] == 100)
                return 1;
        }
    }
    return 0;
}

int func3(int N) //O(루트N);
{
    for (int i = 1; i * i <= N; i++)
    {
        if ((i * i) == N)
            return 1;
    }
    return 0;
}

int func4(int N)
{
    for (int i = 1; (2 * i) <= N; i++)
    {
        if ((2 * i) = N)
            return N;
        else if
    }
}

int func4_teach(int N) //O(logN)
{
    int val = 1; //2의 거듭제곱이 저장되는 변수
    while ((2 * val) <= N)
        val *= 2;
    return val;
}