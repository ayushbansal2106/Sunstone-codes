#include <stdio.h>
int main()
{
    printf("This is the program to check weather the number is Even/Odd || Positive/Negative\n");
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(n>0 && n%2==0)
    {
        printf("The Number %d is Even Positive(+ve)\n",n);
    }
    if(n<0 && n%2==0)
    {
        printf("The Number %d is Even Negative(-ve)\n",n);
    }
    if(n<0 && n%2!=0)
    {
        printf("The Number %d is Odd Negative(-ve)\n",n);
    }
    if(n>0 && n%2!=0)
    {
        printf("The Number %d is Odd Positive(+ve)\n",n);
    }
    return 0;
}

/*{
    if(condition)
    {
        //statement
    }
    else
    {
        //statement
    }
}*/