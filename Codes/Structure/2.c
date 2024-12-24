#include<stdio.h>
int main()
{
    struct book
    {
        char name[50];
        int page;
        float price;
    };
    struct book b1={"a, 12323, 2344.7"};
    printf("Name of book= %c\n", b1.name);
    printf("Number of pages= %u\n", b1.page);
    printf("Price of book= %u\n", b1.price);
    // printf("Name of book= %u\n", b1.name);
}