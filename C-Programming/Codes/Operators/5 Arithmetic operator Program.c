#include <stdio.h>
int main()
{
    int a=9, b=4, c;
    c=a+b;
    printf("a+b: %d\n",c);

    c=a-b;
    printf("a-b: %d\n",c);

    c=a*b;
    printf("a*b: %d\n",c);

    c=a/b;
    printf("a/b: %d\n",c);

    c=a%b;
    printf("Remainder when we divides a by b: %d\n",c);
    return 0;
}