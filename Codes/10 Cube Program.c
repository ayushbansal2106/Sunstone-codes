#include <stdio.h>

int main() 
{
    int i = 1;
    int n;
    printf("enter the valur you want to print cube till: ");
    scanf("%d",&n);

    while (i<= n) 
    {

        printf("Cube of %d :%d\n",i, i*i*i);
        i++;
    }
    return 0;
}