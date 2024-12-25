/*Write a C program that prints all command line arguments, how to access and use command line arguments in a C program.
Instruction
Write a C program that prints all command-line arguments, including the program's name.
Use argc to get the count of arguments and argv to access each argument.
Loop through argv to print each argument with its index.
Compile and run the program with multiple arguments to see the output.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    // argc: argument count
    // argv: argument vector (array of strings)

    // Print total number of arguments
    printf("Total number of arguments: %d\n", argc);

    // Loop through argv and print each argument
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}