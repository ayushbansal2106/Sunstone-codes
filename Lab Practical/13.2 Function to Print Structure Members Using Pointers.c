/*Write a function that prints the members of a structure using pointers.
Instruction
Define a structure Student with members name, age, and marks.
Write a function printStudentDetails that accepts a pointer to a Student structure and prints its members using the pointer.
In the main function, take user input for name, age, and marks of a Student structure.
Call the printStudentDetails function with the address of the structure to display the details.*/

#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

void printStudentDetails(struct Student *student)
{
    printf("\nStudent Details:\n");
    printf("Name: %s\n\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Marks: %.2f\n", student->marks);
}

int main()
{
    struct Student s;

    printf("Enter name:\n");
    scanf("%s", s.name);

    printf("Enter age:\n");
    scanf("%d", &s.age);

    printf("Enter marks:\n");
    scanf("%f", &s.marks);

    printStudentDetails(&s);

    return 0;
}