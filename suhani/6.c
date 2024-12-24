// write a program to print the border of square using star pattern
#include <stdio.h>
void printsquareborder(int size)
{
    if (size < 2)
    {
        printf("size must be 2 squares.\n");
        return;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int size;
    printf("Enter the size of square: ");
    scanf("%d", &size);
    printsquareborder(size);
    return 0;
}