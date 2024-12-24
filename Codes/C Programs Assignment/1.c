/*
Write a C program to print your name, date of birth, and mobile number.
Expected Output:
Name : Alexandra Abramov
DOB : July 14, 1975
Mobile : 99-9999999999*/

#include <stdio.h>
int main()
{
    char name[50];
    char dob[50];
    int mobile;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your date of birth (Month DD, YYYY): ");
    fgets(dob, sizeof(dob), stdin);
    
    printf("Enter your mobile number: +91 ");
    scanf("%10d",&mobile);

    printf("\nYour Details:\n");
    printf("Name : %s", name);
    printf("DOB : %s", dob);
    printf("Mobile : +91 %d", mobile);
    return 0;
}
