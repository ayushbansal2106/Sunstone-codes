/*Write a C program to Perform basic arithmetic operations (sum and average) on array elements using pointers.
Instruction
Define an array, and variables for sum and average.
Use a loop to input array elements from the user.
Implement a function using pointers to compute the sum and average of the array elements.
Print the sum and average values.*/

#include <stdio.h>

void computeSumAndAverage(int *arr, int size, int *sum, float *average)
{
    *sum = 0;
    for (int i = 0; i < size; i++)
    {
        *sum += *(arr + i);
    }
    *average = (float)(*sum) / size;
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

    int sum;
    float average;
    computeSumAndAverage(arr, n, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}