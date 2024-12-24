/*Write a program to print numbers from 1 to n.*/

#include <stdio.h>

int main()
{
    printf("Program to print numbers from 1 to n\n");
    int n;
    printf("Enter the last number you want: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}