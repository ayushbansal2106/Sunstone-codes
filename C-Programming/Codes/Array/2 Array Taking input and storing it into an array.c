//Taking input and storing it in an array

#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter the value to store in array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("\na[%d]=%d\n",i,a[i]);
    }
    for(int i=4;i>=0;i--) //reverse Array Printing
    {
        printf("\na[%d]=%d\n",i,a[i]);
    }
    return 0;
}