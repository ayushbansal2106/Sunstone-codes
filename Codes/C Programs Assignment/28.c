#include <stdio.h>

int main()
{
    int rows, i, j, k, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
