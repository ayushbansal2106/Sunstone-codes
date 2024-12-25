/*Write a C program to Use a switch statement to print the name of the day based on the day number.
Instruction
1. Input a number from 1 to 7.
2. Use the switch statement to print the corresponding day.
3. Ensure to handle invalid inputs with a default case.*/

#include <stdio.h>

int main()
{
    int dayNumber;

    printf("Enter the day number (1-7):\n");
    scanf("%d", &dayNumber);

    switch (dayNumber)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
        break;
    }

    return 0;
}