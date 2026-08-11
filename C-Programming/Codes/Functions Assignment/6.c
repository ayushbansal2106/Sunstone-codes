/*
Write a function rotateArray that rotates an array k positions to the right.
Example Input:
arr = [1, 2, 3, 4, 5], k = 2
Output: [4, 5, 1, 2, 3]
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

void rotateArray(int arr[], int size, int k);

int main() 
{
    int n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    printf("Input the value of K :");
    scanf("%d",&k);

    rotateArray(arr, size, k);

    printf("Rotated array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void rotateArray(int arr[], int size, int k) 
{
    int temp[size];

    k = k % size;

    for (int i = 0; i < k; i++) 
    {
        temp[i] = arr[size - k + i];
    }

    for (int i = k; i < size; i++) 
    {
        temp[i] = arr[i - k];
    }

    for (int i = 0; i < size; i++) 
    {
        arr[i] = temp[i];
    }
}