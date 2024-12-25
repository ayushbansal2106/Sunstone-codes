/*Write a program that use structs to define and manipulate complex data types.
Instruction 
Define a 'Complex' struct with 'float' members for the real and imaginary parts.
Create a variable of type 'Complex' in your 'main' function.
Prompt the user to input the real and imaginary parts of the complex number.
Store these values in the struct variable.
Display the complex number in the format "real + imaginaryi".*/

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

int main()
{
    struct Complex number;

    printf("Enter the real part of the complex number:\n");
    scanf("%f", &number.real);

    printf("Enter the imaginary part of the complex number:\n");
    scanf("%f", &number.imaginary);

    printf("Complex number: %.2f + %.2fi\n", number.real, number.imaginary);

    return 0;
}