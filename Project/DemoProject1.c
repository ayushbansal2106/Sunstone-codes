#include <stdio.h>
#include <string.h>

#define MAX 100

void AddStudent();
void DisplayStudent();
void SearchStudent();
void DeleteStudent();
void PrintMenu();

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student students[MAX];
int count = 0;

int main()
{
    int choice;
    do
    {
        PrintMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            AddStudent();
            break;

        case 2:
            DisplayStudent();
            break;

        case 3:
            SearchStudent();
            break;

        case 4:
            DeleteStudent();
            break;
        
        case 5:
            printf("Exitting");
            break;

        default:
            printf("Invalid input, Try Again!");
            break;
        }
    } while (choice != 5);

    return 0;
}

void AddStudent()
{
    if (count >= 100)
    {
        printf("Storage is full, more students cannot be added\n");
        return;
    }

    int valid = 0;
    while(!valid){
    printf("Enter Roll Number:\n");
    if(scanf("%d", &students[count].roll)!=1)
    {
        printf("Invalid input, enter a numeric roll number\n");
        while (getchar() != '\n');
    }
    else
    {
        valid = 1;
    }
}
    printf("Enter Full Name:\n");
    scanf(" %[^\n]", &students[count].name);
    printf("Enter marks:\n");
    scanf("%f", &students[count].marks);
    count++;
    printf("Student Successfully added\n");
}

void DisplayStudent()
{
    if (count == 0)
    {
        printf("No record found\n");
        return;
    }

    printf("\n--- All Students ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("Roll no: %d\nName: %s\nMarks: %.2f\n\n", students[i].roll, students[i].name, students[i].marks);
    }
}

void SearchStudent()
{
    int roll, found = 0;
    printf("Enter the roll number: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("Record Found\nRoll no: %d\nName: %s\nMarks: %.2f\n\n", students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found)
        {
            printf("Student record not found");
        }
}

void DeleteStudent()
{
    int roll, found = 0;
    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            for (int j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }
            count--;
            found = 1;
            printf("Record deleted successfully");
            break;
        }
    }

    if (!found)
    {
        printf("Student record not found");
    }
}

void PrintMenu()
{
    printf("\n--- Student Record System ---\n");
    printf("1. Add Student\n");
    printf("2. Display Students\n");
    printf("3. Search Student\n");
    printf("4. Delete Student\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}