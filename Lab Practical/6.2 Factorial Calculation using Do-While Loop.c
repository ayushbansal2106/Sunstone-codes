/*Calculate the factorial of a number using a do-while loop and understand how to use the do-while loop for iterations.
Instruction
1. Include 'stdio.h' and declare variables for number, factorial, and counter.
2. Read the number and check if it's negative.
3. Use a 'do-while' loop to compute factorial by multiplying and incrementing.
4. Print the result after the loop.*/

#include <stdio.h>

int main()
{
    int n, f = 1, c = 1;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);
    if (n < 0)
        return printf("Factorial of a negative number doesn't exist.\n"), 1;
    do
    {
        f *= c++;
    } while (c <= n);
    printf("Factorial of %d is %d\n", n, f);
    return 0;
}