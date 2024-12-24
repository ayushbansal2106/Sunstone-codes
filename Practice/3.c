/*Write a program to find the largest of four numbers.*/

#include <stdio.h>

int main()
{
    printf("Program to find the largest of four numbers\n");
    int num1, num2, num3, num4;
    printf("Enter four number to compare: ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if(num1>num2 && num1>num3 && num1>num4)
    {
        printf("%d is the largest number",num1);
    }
    else if (num2>num1 && num2>num3 && num1>num4)
    {
        printf("%d is the largest number",num2);
    }
    else if (num3>num2 && num3>num1 && num3>num4)
    {
        printf("%d is the largest number",num3);
    }
    else
    {
        printf("%d is the largest number",num4);
    }
    return 0;
}