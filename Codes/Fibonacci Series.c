#include <Stdio.h>
int main()
{
    int a = 0, b = 1, result;
    for (int i = 1; i <= 9; i++)
    {
        printf("%d value: %d\n",i,a);
        result = a + b;
        a = b;
        b = result;
    }
    return 0;
}


/*#include<stdio.h>

int main()
{
    int a = 0, b = 1, result;
    printf("%d %d ", a, b);
    for (int i = 3; i <= 7; i++)
    {
        result = a + b;
        printf("%d ", result);
        a = b;
        b = result;
    }
    return 0;
}*/
