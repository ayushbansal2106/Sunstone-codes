/*Declare variables of different basic data types (int, float, char, double) and print their values.
Instruction:
Declare variables for 'int', 'float', 'char', and 'double'.
Use 'scanf' to take input from the user for each variable.
Print the values of the variables using 'printf'.*/

#include <stdio.h>

int main()
{
    int integerVar;
    float floatVar;
    char charVar;
    double doubleVar;

    // Prompt the user for input
    printf("Enter an integer:\n");
    scanf("%d", &integerVar);

    printf("Enter a float:\n");
    scanf("%f", &floatVar);

    printf("Enter a character:\n");
    scanf(" %c", &charVar); // Note the space before %c to consume any newline characters

    printf("Enter a double:\n");
    scanf("%lf", &doubleVar);

    // Display the entered values
    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar); // Display float with 2 decimal places
    printf("Character: %c\n", charVar);
    printf("Double: %.2lf\n", doubleVar);

    return 0;
}