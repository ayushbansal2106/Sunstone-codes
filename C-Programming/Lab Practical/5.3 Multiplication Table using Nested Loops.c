/*Create a program that Print the multiplication table up to n x n using nested loops and how to use nested loops for creating tables.
Instruction
1. Use nested loops: the outer loop iterates through rows, and the inner loop iterates through columns to calculate and print each value ('i * j').
2. Ensure each row starts on a new line by adding a newline ('\n') after completing the inner loop.*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}