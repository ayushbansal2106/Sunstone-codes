/*Write a C program to Allocate memory dynamically for an array using pointers, then populate and print the array.
Instruction
Allocate memory dynamically for an integer array based on user input for the array size.
Populate the array by taking input from the user for each element.
Print the array elements to the console.
Free the allocated memory to avoid memory leaks after the program completes.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}