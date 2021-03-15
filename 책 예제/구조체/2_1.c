#include <stdio.h>
typedef struct Contact_type
{
    char phone[20];
    char email[20];
    char address[20];
} Contact;

typedef struct Student_type
{
    char name[20];
    int age;
    char major[20];
    int grade;
    Contact contact;
} Student;

void main()
{
    Student kim;

    strcpy(kim.name, "Bruce Lee");
    kim.age = 22;
    strcpy(kim.major, "CS");
    kim.grade = 3;
    strcpy(kim.contact.phone, "010");
    strcpy(kim.contact.email, "kim@naver.com");

    printf("name: %s\n", kim.name);
    printf("phone: %s\n", kim.contact.phone);
}