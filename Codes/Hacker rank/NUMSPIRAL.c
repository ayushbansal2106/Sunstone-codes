#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int size = (2 * n) - 1;
    int mat[size][size];
    for (int k = 0; k < n; k++)
    {
        for (int i = k; i < size - k; i++)
        {
            for (int j = k; j < size - k; j++)
            {
                mat[i][j] = n - k;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}