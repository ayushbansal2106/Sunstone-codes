/*a) WAP to calculate perimeter and area of ranctangle.
  b) WAP to calculate the cube of the given number.
  c) WAP to print the average of 3 numbers.
  d) WAP to check if given character is digit or not.
  e) WAP to print the smallest number of two.
  ) add proper comments in all the codes.*/

#include <stdio.h>
#include <math.h>

void ractangle();   //declaring the function
void cube();        //declaring the function
void average();     //declaring the function
void checkdigit();

int main()
{
    ractangle();    //calling the function
    cube();         //calling the function
    average();
    return 0;       //ending the program
}

void ractangle()    //writing the function defination
{
    float a, b;     //decalring the variables
    printf("Enter length of the rectangle: ");
    scanf("%f",&a); //taking input of length from user
    printf("Enter breadth of the rectangle: ");
    scanf("%f",&b); //taking input of breadth from user

    printf("Perimeter of rectangle: %.2f cm\n",(2.0*(a+b)));    //printing the perimeter
    printf("Area of rectangle: %.2f cm\n",a*b);                 //printing the area
}

void cube()         //writing the function defination
{
    int n;          //declaring the variable
    printf("Enter the number you want to calculate cube for: ");
    scanf("%d",&n); //taking input of number from user

    printf("Cube of %d: %.0lf\n",n,pow(n,3));   //printing the cube using the math library function [pow]
}

void average()      //writing the function defination
{
    int a,b,c;      //declaring the variables
    printf("Enter 3 numbers you want to calculate average for: ");
    scanf("%d %d %d",&a,&b,&c); //inputting 3 numbers from user

    printf("Average of %d %d and %d: %d",a,b,c,((a+b+c)/2));    //printing average of 3 numbers
}

void checkdigit()
{
    char a;
    printf("Enter a character you want to check: ");
    scanf("% c",&a);

    if(a>=0 && a<=9)
    {
        printf("You have entered a digit");
    }
    else
    {
        printf("You have not entered a digit");
    }
}

