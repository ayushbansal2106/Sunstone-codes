#include <stdio.h>

int main()
{
    int number, factorial = 1, counter = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        do
        {
            factorial *= counter;
            counter++;
        } while (counter <= number);

        printf("Factorial of %d = %d\n", number, factorial);

        return 0;
    }
}