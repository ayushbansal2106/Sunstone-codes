/*Reverse the digits of a number using a while loop and how to manipulate numbers using loops.
Instruction
1. Start the program and include 'stdio.h'.
2. Read an integer from the user into 'num'.
3. Use a 'while' loop to reverse the digits: extract last digit, update 'reversed', and remove last digit.
4. Print the reversed number.*/

#include <stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter an integer:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("Reversed Number: %d\n", reversed);

    return 0;
}