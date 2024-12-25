/*Write a function to calculate the sum of elements in an array and use it in the main program.
Instruction
Write a function sumOfArray that takes an array and its size as arguments, and returns the sum of the array elements.
In the main function, prompt the user to enter the number of elements and the elements of the array.
Call the sumOfArray function to calculate the sum and display the result.*/

#include <stdio.h>

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = sumOfArray(arr, n);
    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}