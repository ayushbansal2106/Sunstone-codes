#include <stdio.h>
int main()
{
    char name, surname;
    printf("First name:\n");
    scanf("%s",&name);
    printf("Last Name:\n");
    scanf("%s",&surname);
    /*printf("Name = %s",name);
    printf(" %s",surname);*/
    printf("Name: %s %s",name,surname);
    return 0;
}