#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    fact(n);
}

void fact(int number)
{
    int factorial = 1, counter = 1;

    if (number < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    }

    do
    {
        factorial *= counter;
        counter++;
    } while (counter <= number);

    printf("Factorial of %d = %d\n", number, factorial);
}

// return 0;

/*
Algorithm: Calculate Factorial of a Number

Step 1: Input a positive integer from the user.

Step 2: Check if the input number is negative.
- If yes, display an error message and exit.

Step 3: Calculate the factorial using a do-while loop.
- Multiply factorial by counter.
- Increment counter by 1.
- Repeat until counter is greater than the input number.

Step 4: Display the calculated factorial.

Step 5: Exit the program.*/

/*
Pseudocode

START
    INPUT number
    IF number < 0 THEN
        DISPLAY "Error! Factorial of a negative number doesn't exist."
        TERMINATE
    END IF
    INITIALIZE factorial = 1
    INITIALIZE counter = 1
    DO
        factorial = factorial * counter
        counter = counter + 1
    WHILE counter <= number
    DISPLAY "Factorial of " + number + " = " + factorial
EXIT
*/