#include<stdio.h>
int main()
{
    struct book
    {
        char name;
        int page;
        float price;
    }b1, b2, b3;  // b1, b2, b3 are the elements
    /*  another way to declare the element is
        struct book b1, b2, b3;
    */
    
    scanf("%s %d %f",&b1.name, &b1.page, &b1.price);
    scanf("%s %d %f",&b2.name, &b2.page, &b2.price);
    scanf("%s %d %f",&b3.name, &b3.page, &b3.price);
    printf("The input you have entered \n");
    printf("%c %d %.1f\n", b1.name, b1.page, b1.price);
    printf("%c %d %.1f\n", b2.name, b2.page, b2.price);
    printf("%c %d %.1f\n", b3.name, b3.page, b3.price);
    return 0;

}

/*  Syntax
    struct <structure name>
    {
        variable 1;
        variable 2;
        variable 3;
    };
*/
