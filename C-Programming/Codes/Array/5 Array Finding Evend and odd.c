//Q) Write a program to read 10 numbers and and count number of even and odd numbers in the array.

#include<stdio.h>
int main()
{
    int num[10];
    int even=0, odd=0;
    printf("Enter any 10 random numbers: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total Even number: %d\n",even);
    printf("Total odd number: %d\n",odd);
    return 0;
}