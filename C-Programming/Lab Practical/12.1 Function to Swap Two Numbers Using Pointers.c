/*Write a function that swaps two numbers using pointers and call it from the main program.
Instruction
Write a function swap that takes two integer pointers and swaps the values they point to.
In the main function, prompt the user to enter two numbers.
Call the swap function, passing the addresses of the two numbers as arguments.
Display the numbers before and after swapping to verify the function works correctly.*/

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}