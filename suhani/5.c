#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of input");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int duplicate =0;
    for (int i = 0; i < n; i++)
    {
        for (int j=(i + 1); j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is: %d\n",duplicate);

    return 0;
}