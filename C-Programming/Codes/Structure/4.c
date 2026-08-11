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

/*#include<stdio.h>
#include<string.h>

int main()
{
    struct collage
    {
        int Roll_No;
        char Name;
        char Department;
        char Course;
        int Year_of_Joining;
    };
    int n=450;
    struct collage c[n];

    int a;
    printf("Enter the number of students you want to add data for: ");
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        printf("Enter Data of Student %d: \n", i+1);
        scanf("%d %c %c %c %d",&c[i].Roll_No, &c[i].Name, &c[i].Department, &c[i].Course, &c[i].Year_of_Joining);
    }

    for(int i=0; i<a; i++)
    {
        printf("The input you have entered for book %d \n", i+1);
        printf("%d %c %c %c %d\n", c[i].Roll_No, c[i].Name, c[i].Department, c[i].Course, c[i].Year_of_Joining);
    }
}*/
