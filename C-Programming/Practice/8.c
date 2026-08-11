/*Write a program to calculate the sum of even numbers in an array.*/

#include <stdio.h>

int main()
{
    printf("Program to calculate the sum of even numbers in an array\n");
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
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("Sum of even numbers in the array: %d",sum);
    return 0;
}