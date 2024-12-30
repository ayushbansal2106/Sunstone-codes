#include <stdio.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person p = {"John", 25};
    struct Person *ptr = &p;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    return 0;
}
