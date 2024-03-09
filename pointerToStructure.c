#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int number;
    int age;
};

// struct pointer as a function parameter
void showStudentData(struct student *st)
{
    printf("\nStudent: \n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

int main()
{
    struct student st1 = {"Ashraful", 10, 24};
    showStudentData(&st1);

    return 0;
}
