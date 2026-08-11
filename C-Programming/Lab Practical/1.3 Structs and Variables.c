/*Use structs to define and manipulate complex data types and understand how to define and use structs.
Instruction:
1. Define a 'struct Student' with 'name', 'id', and 'grade' fields.
2. Use 'fgets' for reading the name and 'scanf' for the ID and grade.
3. Implement 'printStudent' to display details and 'updateGrade' to change the grade.*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int id;
    float grade;
};

void printStudent(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Grade: %.2f\n", s.grade);
}

struct Student updateGrade(struct Student s, float newGrade)
{
    s.grade = newGrade;
    return s;
}

int main()
{
    struct Student student;
    printf("Enter student's name:\n");
    scanf(" %[^\n]", student.name);
    printf("Enter student's ID:\n");
    scanf("%d", &student.id);
    printf("Enter student's grade:\n");
    scanf("%f", &student.grade);
    printf("\nStudent Details:\n");
    printStudent(student);
    float newGrade;
    printf("\nEnter new grade for the student:\n");
    scanf("%f", &newGrade);
    student = updateGrade(student, newGrade);
    printf("\nUpdated Student Details:\n");
    printStudent(student);
    return 0;
}