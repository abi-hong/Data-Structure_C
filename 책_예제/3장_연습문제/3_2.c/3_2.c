#include <stdio.h>

/*int main() //반복문 사용
{
    int number[7] = {17, 28, 43, 67, 88, 92, 100};
    int low = 0;
    int high = 6;
    int mid;
    int target = 28;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (number[mid] == target)
        {
            printf("%d\n", mid);
            return mid;
        }
        else if (number[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}*/

int Rsearch(int number[], int target, int low, int high) // 재귀로 구현
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (number[mid] == target)
    {
        return mid;
    }
    else if (number[mid] > target)
    {
        return Rsearch(number, target, low, mid - 1);
    }
    else
    {
        return Rsearch(number, target, mid + 1, high);
    }
    return 0;
}