/*Write a program to calculate the average of three numbers.*/

#include <stdio.h>

int main()
{
    printf("Program to calculate the average of three numbers\n");
    int num1, num2, num3;
    printf("Enter three number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    int average = (num1+num2+num3)/3;
    printf("Average of %d, %d and %d: %d",num1,num2,num3,average);
    return 0;
}