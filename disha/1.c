#include <stdio.h>
void reverseArray()
{
    int arr[50],i,n,rev[50],r=0;
    printf("enter the number of element: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter value at position %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        rev[r]=arr[i];
        r++;
    }
    printf("\n AFTER REVERSING \n");
    for(i=0; i<n; i++)
    {
        printf("value at position %d: %d \n",i,rev[i]);
    }
}
int main()
{
    reverseArray();
    return 0;
}