#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an element:");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        printf("element %d:",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("address of an element are:%d \n",&a[i]);
    }
    
    return 0;
}