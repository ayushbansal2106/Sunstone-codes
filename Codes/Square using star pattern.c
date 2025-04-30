#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows)
            {
                printf("* ");
            }
            else if (i == 2 || i == rows-1 || j == 2 || j == rows-1)
            {
                printf("1 ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
