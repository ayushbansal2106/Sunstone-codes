/*
Syntax
Datatype *Variable Name
*/

#include<stdio.h>
int main()
{
    int a=5;
    float b= 4.5;
    char c='a';
    int *p;
    char *pt;
    float *ptr;
    p=&a;
    printf("%p",&a);
    // printf("%d\n",&a);
    // printf("%d\n",p);
    // printf("%d\n",&p);
    // printf("%d\n",*p);
    // printf("%d\n",*(&a));
    return 0;
}

/*
1. Uses of pointer
    a) Efficient variable access
    b) Dynamic Memory Mamagement
    c) pointer to pointer for handeling complex memory structure
    d) Creating and manipulating dynamic data structure like linkedlist, tree, graph etc..

2. Characterstics of pointer
    a) If your system id of 16 bytes, pointer uses 2 bits of memory.
    b) If your system id of 32 bytes, pointer uses 4 bits of memory.
*/