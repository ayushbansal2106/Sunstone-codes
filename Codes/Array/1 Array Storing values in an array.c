//storing values in an array

#include <stdio.h>
int main()
{
    int a[10] = {1,2,3,4,6,7,8,9,10,11};
    char b[5] = {'a','b','c','d','e'};
    for(int i=0;i<10;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("%c",b[4]);
    return 0;
}

//Array: It stores multiple values, large data of same data type

//syntax: Datatype_Array[Size] = Values

//Disadvantage is that Array's size is fixed

/*if in for loop instead of <10 you will write the value out of index number,
it will automatically prints the garbage value.
Garbage value means: in array it already has some values, we are just re-writing it by storing new values.
Therefore, garbage value is the already store*/