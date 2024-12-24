/*
Write a function called findMax that takes an array of integers as input and returns the maximum value in the array.
Example Input: arr = [3, 1, 4, 1, 5, 9]
Output: 9
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

int findMax();

int main()
{
    int maxValue = findMax();
    printf("The maximum value in the array is %d.\n", maxValue);
}

int findMax()
{
    int n;
    printf("Enter the number of values you want to store: ");
    scanf("%d",&n);
    int arr[n];
   
    printf("Enter the value to store in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     int max= arr[0];
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    return max;
}