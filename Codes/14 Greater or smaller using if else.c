#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a, b, c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greater than %d & %d",a,b,c);
    }
    else
    {
        printf("%d is smaller",a);
    }
    if(b>a && b>c)
    {
        printf("%d is greater than %d & %d",b,a,c);
    }
    if(c>a && c>b)
    {
        printf("%d is greater than %d & %d",c,a,b);
    }
    return 0;
}
