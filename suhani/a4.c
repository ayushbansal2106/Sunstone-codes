// Write a program in C to copy the elements of one array into another array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12

#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of element :");
    scanf("%d",&n);
    int arr[n], arr2[n];
    printf(" number of elements in the array %d :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    printf("The elements stored in the first array are :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe elements copied into the second array are :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}