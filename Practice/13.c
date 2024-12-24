/*Write a program to reverse an array.*/

#include <stdio.h>

int main()
{
    printf("Program to find the minimum element in an array\n");
    int index;
    printf("Enter the size of the array: ");
    scanf("%d", &index);
    int arr[index];
    printf("Enter %d elements in the array\n", index);
    for (int i = 0; i < index; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array in original form\n");
    for (int i = 0; i < index; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray in reversed form\n");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}