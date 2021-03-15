#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};
struct Person_type
{
    char name[20];
    int age;
    float salary;
    struct date birth;
};

struct Person_type person[10];

void personstruct(int);
void average_salary(int);

void main()
{
    int i = 0;
    char name[20];
    int age;
    float salary, mean;
    int month, day, year;
    int ans = 1;
    int count = 0;

    while (ans != 0)
    {
        count++;
        printf("person data [%d] \n", i + 1);
        scanf("%d", p);
        scanf("%d", );
        scanf("%d", );
    }
}