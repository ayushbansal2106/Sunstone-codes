/*Write a program to find the maximum element in an array.*/

#include <stdio.h>

int main()
{
    printf("Program to find the maximum element in an array\n");
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
    int max = arr[0];
    for(int i = 0; i< index; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("Maximum element in the array: %d",max);
    return 0;
}