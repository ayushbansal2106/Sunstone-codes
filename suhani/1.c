#include <stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d elements in the array\n",n);
    for( i=0; i<n;i++)
    {
        printf("\nelement %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("elements in array: ");
    for(i=0; i<n;i++)
    {
        printf("%d ",arr[i]);
        sum +=arr[i];
    }
    
    printf("the sum of array :%d",sum);

    return 0;
}