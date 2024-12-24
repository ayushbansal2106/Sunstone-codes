/*Write a program to convert Celsius to Fahrenheit.*/

#include <stdio.h>

int main()
{
    printf("Program to convert Celsius to Fahrenheit\n");
    float tempc,tempf;
    printf("Enter the Temperature in celcius: ");
    scanf("%f",&tempc);
    tempf = (tempc*(9/5))+32;
    printf("%.2f celsius in fahrenheit: %.2f",tempc,tempf);
    return 0;
}