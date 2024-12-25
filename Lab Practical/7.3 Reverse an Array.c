/*Write a C program to Reverse the elements of a one-dimensional array.
Instruction
Write a C program that reads an array of integers from the user.
Reverse the array by swapping elements from the beginning and end.
Print the reversed array.
Ensure the program handles the input size and values correctly.*/

#include <stdio.h>

int main()
{
    int n, i, temp;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}