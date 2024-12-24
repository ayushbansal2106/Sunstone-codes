#include <stdio.h>
// Driver code
int main()
{
// Declaring a char type array
// of length 50 characters
char name[5];
printf("Please enter some texts: ");
// Reading a line of character or
// a string
gets(name);
// Displaying this line of character
// or a string
printf("You have entered: %s",
name);
return 0;
}