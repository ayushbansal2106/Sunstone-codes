#include<stdio.h>
int main()
{
    int i;
    printf("Enter a selection Between 1 & 8: ");
    scanf("%d",&i);
    if(i>1&&i<=8)
    {
        printf("Thank You ❤️.");
    }
    else
    {
        printf("Wrong Entry, ERROR");
    }
    return 0;
}