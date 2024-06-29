#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int id;
    float cgpa;
};

int main()
{

    struct Student s[2];

    // store
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &s[i].id);
        fgets(s[i].name, 50, stdin);
        scanf("%f", &s[i].cgpa);
    }

    // display
    for (int i = 0; i < 2; i++)
    {
        printf("Student ID: %d\n", s[i].id);
        printf("Student Name: ");
        puts(s[i].name);
        printf("Student CGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}