/*Write a program to check if a number is within a range.*/

#include <stdio.h>

int main()
{
    printf("Program to check if a number is within a range or not\n");
    int s, e, n;
    printf("Enter the starting of the range: ");
    scanf("%d", &s);
    printf("Enter the ending of the range: ");
    scanf("%d", &e);

    if (e > s)
    {
        printf("Enter the number to check: ");
        scanf("%d", &n);
        if (n >= s && n <= e)
        {
            printf("%d lies within the range", n);
        }
        else
        {
            printf("%d does not lies within the range", n);
        }
    }
    else
    {
        printf("Ending point should be greater than the starting point");
    }
    return 0;
}