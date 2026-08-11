#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n], odd[n], even[n];
    int oddCount = 0, evenCount = 0;
    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }
    printf("Odd integers: ");
    for (i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
    printf("Even integers: ");
    for (i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    return 0;
}