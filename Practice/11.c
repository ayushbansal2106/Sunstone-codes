/*Write a program to find the minimum element in an array.*/

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
    int min = arr[0];
    for(int i = 0; i< index; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Minimum element in the array: %d",min);
    return 0;
}