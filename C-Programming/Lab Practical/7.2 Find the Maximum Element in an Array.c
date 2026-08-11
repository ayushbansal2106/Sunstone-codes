/*Write a C program to Find the maximum element in a one-dimensional array.
Instruction
Write a C program that prompts the user for the number of elements and then reads those elements into an array.
Implement logic to find the maximum element in the array using a loop.
Display the maximum element after processing all the array elements.*/

#include <stdio.h>

int main()
{
    int n, i, max;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The maximum element is %d\n", max);

    return 0;
}