/*Write a program that Calculate the sum of the first n even numbers using a for loop.
Instruction
1. Use a for loop to add the first n even numbers to sum.
2. Print the result.*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Input number of even numbers to sum
    printf("Enter the number of even numbers:\n");
    scanf("%d", &n);
    sum = n * (n + 1);
    printf("Sum of the first %d even numbers is: %d", n, sum);
    return 0;
}