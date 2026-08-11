/*Write a C program to Use the goto statement to handle errors in a program that calculates the factorial of a number.
Instruction
1. Input a positive integer.
2. If the input is invalid, jump to the error label.
3. Compute and display the factorial; otherwise, print an error message.*/

#include <stdio.h>

int main()
{
    int num;
    long factorial = 1;
    printf("Enter a positive integer:\n");

    if (scanf("%d", &num) != 1)
    {
        goto error;
    }

    if (num < 0)
    {
        goto error;
    }

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d = %ld\n", num, factorial);
    goto end;

error:
    printf("Invalid input. Please enter a positive integer.\n");
    // Clear input buffer to prevent infinite loop
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;

end:
    return 0;
}