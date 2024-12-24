/*  Write a program in C to print all unique elements in an array. Test Data :
    Print all unique elements of an array:

    Input the number of elements to be stored in the array: 4 Input 4 elements in the array :
    element - 0 : 3
    element - 1 : 2
    element - 2 : 2
    element - 3 : 5 
    Expected Output :
    The unique elements found in the array are:
    3 5
*/

#include<stdio.h>
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
    for (int i = 0; i < n; i++)
    {
        int Unique = 1;
        for (int j=0; j < n; j++)
        {
            if (arr[i] == arr[j] && i!=j)
            {
                Unique = 0;
                break;
            }
        }
        if (Unique) 
        {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");

    return 0;
}