#include <stdio.h>

int main()
{
    int n, arr[100], val, pos;
    printf("Input number of elements you want to insert (max 100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Input the value to be inserted: ");
    scanf("%d", &val);
    printf("Enter the position you want to insert the number: ");
    scanf("%d",&pos);
    for (int j = n; j >= pos; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[pos-1] = val;
    n++;
    printf("After Insert the list is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}