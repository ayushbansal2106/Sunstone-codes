/*Write a C program to Use bitwise operators to manipulate data at the bit level.
Instruction
1. Take an integer input and another number to perform bitwise operations.
2. Use bitwise operators (&, |, ^, ~, <<, >>) on the input integer with the specified number or positions.
3. Print the results of each operation for verification.*/

#include <stdio.h>
int main()
{
    int num, result;
    int n, pos;
    // Take user input

    printf("Enter an integer:\n");

    scanf("%d", &num);

    // Bitwise AND operation (clearing specific bits)

    printf("Enter a number to AND with:\n");
    scanf("%d", &n);
    result = num & n;
    printf("Result of %d AND %d = %d\n", num, n, result);

    // Bitwise OR operation (setting specific bits)

    printf("Enter a number to OR with:\n");
    scanf("%d", &n);
    result = num | n;
    printf("Result of %d OR %d = %d\n", num, n, result);

    // Bitwise XOR operation (toggling specific bits)

    printf("Enter a number to XOR with:\n");
    scanf("%d", &n);
    result = num ^ n;
    printf("Result of %d XOR %d = %d\n", num, n, result);

    // Bitwise NOT operation (inverting all bits)

    result = ~num;
    printf("Result of NOT %d = %d\n", num, result);

    // Bitwise left shift operation (shifting bits to the left)

    printf("Enter the number of positions to left shift: ");
    scanf("%d", &pos);
    result = num << pos;
    printf("Result of %d << %d = %d\n", num, pos, result);

    // Bitwise right shift operation (shifting bits to the right

    printf("Enter the number of positions to right shift: ");
    scanf("%d", &pos);
    result = num >> pos;
    printf("Result of %d >> %d = %d", num, pos, result);
    return 0;
}