/*Write a program to print a multiplication table.*/

#include <stdio.h>

int main()
{
    printf("Program to print a multiplication table\n");
    int n;
    printf("Enter the number you want the table for: ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d : %d\n",n,i,n*i);
    }
    
    return 0;
}