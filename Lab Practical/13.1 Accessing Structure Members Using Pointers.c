/*Write a C program to Define a structure and access its members using pointers.
Instruction
Define a structure Student with members name, rollNo, and marks.
Declare a pointer to the structure and use it to access and modify the structure members.
Use scanf() to take user input for the structure members via the pointer.
Finally, print the structure members using the pointer to display the student details.*/

#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct Student s, *ptr;
    ptr = &s;

    printf("Enter name:\n");
    scanf("%s", ptr->name);

    printf("Enter roll number:\n");
    scanf("%d", &ptr->rollNo);

    printf("Enter marks:\n");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}