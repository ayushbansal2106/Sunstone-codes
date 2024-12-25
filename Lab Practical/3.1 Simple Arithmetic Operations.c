/*Write a C program to Perform basic arithmetic operations using different operators.

Instruction
Include the 'stdio.h' header file to use input/output functions.
Read two integers from the user and store them in variables 'a' and 'b'.
Print the results of addition, subtraction, multiplication, division, and modulus using these variables.*/

#include <stdio.h>

int main() 
{
    int a,b;
    printf("Enter two integers:\n");
    scanf("%d%d",&a,&b);
    printf("Addition: %d + %d = %d\n",a,b,a+b);
    printf("Subtraction: %d - %d = %d\n",a,b,a-b);
    printf("Multiplication: %d * %d = %d\n",a,b,a*b);
    printf("Division: %d / %d = %d\n",a,b,a/b);
    printf("Modulus: %d %% %d = %d\n",a,b,a%b);
    return 0;
}