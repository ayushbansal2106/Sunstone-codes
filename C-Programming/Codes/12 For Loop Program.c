#include <stdio.h>
int main()
{
    int m,n,i;
    printf("Enter the starting Value\n");
    scanf("%d",&n);
    printf("Enter the ending Value\n");
    scanf("%d",&m);
    
    for(i=n;i>=m;i--)
    {
         printf("%d\n",i);
    }
    
    return 0;
}