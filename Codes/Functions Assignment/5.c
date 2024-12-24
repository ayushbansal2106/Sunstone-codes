/*
Write a function findDuplicates that takes an array as input and returns an array of duplicate values (values that appear more than once).
Example Input:
arr = [1, 2, 3, 2, 4, 5, 1]
Output:
[1, 2]
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

void findDuplicate();

int main()
{
    findDuplicate();
}

void findDuplicate()
{
    int n=0;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j=(i + 1); j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }
}