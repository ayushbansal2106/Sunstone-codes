#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdarg.h>
#include <signal.h>
#include <setjmp.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>
#include <stdio.h>

int main()
{
    int roll, physics, chemistry, computer_application;
    char name[50];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &roll);
    printf("Input the Name of the Student : ");
    scanf("%s", &name);
    printf("Input the marks of Physics, Chemistry and Computer Application(Separate by space): ");
    scanf("%d %d %d", &physics, &chemistry, &computer_application);

    printf("Roll No: %d\n", roll);
    printf("Namr of student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", computer_application);
    printf("Total Marks: %d\n", physics + chemistry + computer_application);
    printf("Percentage: %d\n", (physics + chemistry + computer_application) / 3);

    if ((physics + chemistry + computer_application) / 3 >= 80 && (physics + chemistry + computer_application) / 3 <= 100)
    {
        printf("Division = First\n");
    }
    else if ((physics + chemistry + computer_application) / 3 >= 50 && (physics + chemistry + computer_application) / 3 < 80)
    {
        printf("Division = Second\n");
    }
    else if ((physics + chemistry + computer_application) / 3 >= 30 && (physics + chemistry + computer_application) / 3 < 50)
    {
        printf("Division = Third\n");
    }
    else
    {
        printf("Division = FAIL\n");
    }
    return 0;
}