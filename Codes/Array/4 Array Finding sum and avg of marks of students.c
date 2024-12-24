//Finding Sum and Avg of marks of students

#include <stdio.h>
int main()
{
    float sum=0, avg;
    float marks[5];
    printf("Enter the marks: ");
    for(int i=0;i<5;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=(sum+marks[i]);
    }
    avg = sum/5;
    printf("sum: %.2f",sum);
    printf("avg: %.2f",avg);
    return 0;
}