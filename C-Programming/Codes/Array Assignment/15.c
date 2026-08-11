#include <stdio.h>

int main()
{
    int n, pos;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Input the position where to delete: ");
    scanf("%d", &pos);
    for (int i = pos-1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("The new list is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
