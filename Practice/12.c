/*Write a program to find the average of elements in an array.*/

#include <stdio.h>

int main()
{
    printf("Program to find the average of elements in an array\n");
    int index,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d", &index);
    int arr[index];
    printf("Enter %d elements in the array\n", index);
    for (int i = 0; i < index; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < index; i++)
    {
        sum+=arr[i];
    }
    int avg = sum/index;
    printf("Average of elements in the array: %d",avg);
    return 0;
}