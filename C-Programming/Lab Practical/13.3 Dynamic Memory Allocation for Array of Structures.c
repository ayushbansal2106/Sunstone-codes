/*Write a C program to Use dynamic memory allocation to create an array of structures, then populate and print the data.
Instruction
Define a structure to store student details such as name, age, and grade.
Use dynamic memory allocation with malloc to create an array of structures based on the user-specified number of students.
Collect input for each student's details (name, age, grade) using a loop, and store them in the allocated memory.
Print the student details from the dynamically allocated memory, and free the memory once done.*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure to store information
struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    int n;
    struct Student *students;

    // Get the number of students from the user
    printf("Enter the number of students:\n");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    students = (struct Student *)malloc(n * sizeof(struct Student));

    // Check if memory allocation was successful
    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Get details of each student
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name:\n");
        scanf("%s", students[i].name);
        printf("Age:\n");
        scanf("%d", &students[i].age);
        printf("Grade:\n");
        scanf("%f", &students[i].grade);
    }

    // Print the details of all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d: Name = %s, Age = %d, Grade = %.2f\n",
               i + 1, students[i].name, students[i].age, students[i].grade);
    }

    // Free the allocated memory
    free(students);

    return 0;
}