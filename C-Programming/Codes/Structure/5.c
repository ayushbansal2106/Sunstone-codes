/*
Create a structure to specific data on student given below, assume that there are not more than 450 student in the collage.
condition:
    1. write a dunction to print names of all student who joined in a particular year.
    2. write a function to print the data of a student whose roll number is given.
Roll No
Name
Department
Course
Year of Joining
*/

#include <stdio.h>
#include <string.h>

void printStudentsByYear(int year);
void printStudentByRollNo(int rollNo);

struct student
{
    int Roll_No;
    char Name[100];
    char Department[50];
    char Course[50];
    int Year_of_Joining;
};

struct student collage[450];

int main()
{
    int a;
    do
    {
        printf("Enter the number of students you want to add data for (max 450): ");
        scanf("%d", &a);
    
        if (a > 450)
        {
            printf("You can only enter data for a maximum of 450 students.\n");
            // return 1;
        }
    } while (a>450);
    
    // if (a > 450)
    // {
    //     printf("You can only enter data for a maximum of 450 students.\n");
    //     return 1;
    // }

    for (int i = 0; i < a; i++)
    {
        printf("Enter Data of Student %d :\n", i + 1);
        printf("Roll_No: ");
        scanf("%d", &collage[i].Roll_No);
        printf("Student Name: ");
        scanf("%s",collage[i].Name);
        printf("Department Name: ");
        scanf("%s",collage[i].Department);
        printf("Course Name: ");
        scanf("%s",collage[i].Course);
        printf("Year Of Joining: ");
        scanf("%d",&collage[i].Year_of_Joining);
    }

    int choice;
    do
    {
        printf("\nDo you want to:\n1. Find student by Roll No\n2. Find students by Year of Joining\n3. Exit\n");
        printf("Enter your choice (1, 2, or 3): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int rollNo;
            printf("Enter the Roll No of student you want to find: ");
            scanf("%d", &rollNo);
            printStudentByRollNo(rollNo);
            break;
        }
        case 2:
        {
            int year;
            printf("Enter the Joining Year of students you want to find: ");
            scanf("%d", &year);
            printStudentsByYear(year);
            break;
        }
        case 3:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
    } while (choice != 3);

    return 0;
}

void printStudentByRollNo(int rollNo)
{
    for (int i = 0; i < 450; i++)
    {
        
        if (collage[i].Roll_No == rollNo)
        {
            printf("Roll No: %d\n", collage[i].Roll_No);
            printf("Name: %s\n", collage[i].Name);
            printf("Department: %s\n", collage[i].Department);
            printf("Course: %s\n", collage[i].Course);
            printf("Year of Joining: %d\n", collage[i].Year_of_Joining);
            return;
        }
    }
    printf("\nStudent with Roll No %d not found.\n", rollNo);
}

void printStudentsByYear(int year)
{
    int found = 0;
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < 450; i++)
    {
        if (collage[i].Year_of_Joining == year)
        {
            printf("%s\n", collage[i].Name);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No students found who joined in %d.\n", year);
    }
}

/*
Pseudocode

START
    INPUT number of students (max 450)

    WHILE number of students > 450
        DISPLAY error message
        INPUT number of students (max 450)
    END WHILE
    FOR each student (1 to number of students)
        INPUT Roll No, Name, Department, Course, Year of Joining
        STORE data in array
    END FOR
    DO
        DISPLAY menu options (1. Find student by Roll No, 2. Find students by Year of Joining, 3. Exit)
        INPUT choice

        SWITCH choice
            CASE 1:
                INPUT Roll No
                FIND student by Roll No
                DISPLAY student data (if found)
            CASE 2:
                INPUT Year of Joining
                FIND students by Year of Joining
                DISPLAY students' names (if found)
            CASE 3:
                DISPLAY exit message
            DEFAULT:
                DISPLAY error message
        END SWITCH

    WHILE choice ≠ 3

END
*/