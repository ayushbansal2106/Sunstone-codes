/*Write a function that sorts an array using the bubble sort algorithm and pointers.
Instruction
Write a swap function to exchange two integer values using pointers.
Implement the bubbleSort function to sort an array by repeatedly swapping adjacent elements if they are in the wrong order.
In main(), read the number of elements and the array values from the user.
Call bubbleSort on the array and then print the sorted array.*/

#include <stdio.h>

// Function to swap two elements using pointers
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to perform Bubble Sort using pointers
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}