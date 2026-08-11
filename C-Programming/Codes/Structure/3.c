#include<stdio.h>
int main()
{
    struct book
    {
        char name;
        int page;
        float price;
    };
    int n;
    printf("enter the number of data you want to store: ");
    scanf("%d",&n);
    struct book b[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter name, pages & price for book %d: \n", i+1);
        scanf("%s %d %f",&b[i].name, &b[i].page, &b[i].price);
    }
    printf("The input you have entered \n");
    for(int i=0; i<n; i++)
    {
        printf("The input you have entered for book %d \n", i+1);
        printf("%c %d %.1f\n", b[i].name, b[i].page, b[i].price);
    }
}