#include <stdio.h>
int main()
{
    int arr[3][3];
    int num = 1, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = num;
            num++;
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0, j = 0; i < 3, j < 3; i++, j++)
    {
        sum = sum + arr[i][j];
    }
    printf("%d", sum);
}