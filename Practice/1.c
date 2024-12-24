/*Write a program to calculate the area of a rectangle.*/

#include <stdio.h>

int main()
{
    printf("Program to calculate the area of a rectangle\n");
    int length, breadth;
    printf("Enter the Length of rectangle (in cm): ");
    scanf("%d",&length);
    printf("Enter the Breadth of rectangle (in cm): ");
    scanf("%d",&breadth);
    int area = length*breadth;
    printf("Area of Rectangle with lenght %d cm and breadth %d cm: %d (cm)^2",length,breadth,area);
    return 0;
}