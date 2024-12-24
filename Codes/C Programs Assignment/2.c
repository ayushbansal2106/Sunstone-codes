#include <stdio.h>

int main()
{
    char c1, c2, c3;

    printf("Enter three characters separated by space: ");
    scanf("%c %c %c", &c1, &c2, &c3);

    printf("The character entered are: %c %c %c\n",c1,c2,c3);
    char temp = c1;
    c1 = c3;
    c3 = temp;

    printf("The reversed chatracter are: %c %c %c\n",c1,c2,c3);

    return 0;
}
