/*Write a C program to Access and print array elements using pointers.
Instruction
Define an integer array and a pointer to point to the first element of the array.
Use a loop to get input from the user, storing values in the array using the pointer.
Use another loop to print the array elements by dereferencing the pointer.*/

#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
