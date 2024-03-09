#include <stdio.h>
struct student
{
    int age;
    int grade;
    char name[100];
};

int main()
{

    struct student s1 = {19, 9, "John"};
    struct student s2 = {.grade = 25, .age = 30, .name = "Ashraful"};
    printf("Student, %d  %d\n", s2.age, s2.grade);
    return 0;
}
