#include <stdio.h>

int main() 
{
    int i=1, m=0;

    while (i<=10) 
    {
        m+=i;
        i++;
    }
    printf("Sum of first 10 Natural Number:\n%d\n",m);
    return 0;
}