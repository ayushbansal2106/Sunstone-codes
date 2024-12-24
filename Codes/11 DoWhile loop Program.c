#include <stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while (i>=10 && i<=20);
    return 0;
}

/*This loop will execute the code block once,
before checking the condition is true
after that then it will repeat the loop as long as condition is true.*/