/*
Write a function mergeArrays that takes two sorted arrays as input and returns a single sorted array.
Example Input:
arr1 = [1, 3, 5], arr2 = [2, 4, 6]
Output:[1, 2, 3, 4, 5, 6]
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

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]); //declaring the function

int main() {
    int n, m;
    printf("Input the number of elements to store in 1st array : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Input the number of elements to store in 2nd array : ");
    scanf("%d",&m);
    int arr2[m];
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr2[i]);
    }
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArray[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) 
    {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}


void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) //defining the function
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            mergedArray[k++] = arr1[i++];
        } else 
        {
            mergedArray[k++] = arr2[j++];
        }
    }
    while (i < size1) 
    {
        mergedArray[k++] = arr1[i++];
    }
    while (j < size2) 
    {
        mergedArray[k++] = arr2[j++];
    }
}