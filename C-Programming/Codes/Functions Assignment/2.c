/*
Write a function reverseArray that takes an array as input and returns a new array that is the reverse of the original array.
Example Input:
arr = [1, 2, 3, 4, 5]
Output:
[5, 4, 3, 2, 1]
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdarg.h>
#include <signal.h>
#include <setjmp.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>

void reverseArray();

int main()
{
    reverseArray();
}

void reverseArray()
{
    int n;
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr[i]);
    }
    printf("The values store into the array are :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe values store into the array in reverse are :\n");
    for(int i=(n-1);i>=0;i--) //reverse Array Printing
    {
        printf("%d ",arr[i]);
    }
}