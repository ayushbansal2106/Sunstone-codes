/*  Write a program in C to merge two arrays of the same size sorted in descending order. Test Data :
    Input the number of elements to be stored in the first array :3 Input 3 elements in the array :
    element - 0 : 1
    element - 1 : 2
    element - 2 : 3
    Input the number of elements to be stored in the second array :3 Input 3 elements in the array :
    element - 0 : 1
    element - 1 : 2
    element - 2 : 3 Expected Output :
    The merged array in decending order is :
    3 3 2 2 1 1
*/

#include<stdio.h>
int main()
{
    int n,o;
    printf("Input the number of elements to be stored in the First array :");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d number of elements in the First array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr[i]);
    }
    printf("Input the number of elements to be stored in the Second array :");
    scanf("%d",&o);
    int arra[o];
    printf("Input %d number of elements in the Second array :\n",n);
    for(int i=0;i<o;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arra[i]);
    }
    printf("The merged array in decending order is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        for(int i=0;i<o;i++)
        {
            printf("%d ",arra[i]);
        }
    }
    return 0;
}