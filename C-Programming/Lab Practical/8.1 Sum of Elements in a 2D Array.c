/*Write a C program to Calculate the sum of all elements in a two-dimensional array.
Instruction
Write a C program that defines a 2D array with 3 rows and 3 columns.
Prompt the user to enter values for each element of the array.
Calculate the sum of all the elements in the array.
Print the sum to the screen.*/

#include <stdio.h>

int main()
{
    int arr[3][3];
    int sum = 0;

    printf("Enter elements of the array (3 x 3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}