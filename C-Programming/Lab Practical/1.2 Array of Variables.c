/*Declare an array and initialize it with values. Calculate the sum of the elements.
Instructions:
Enter the number of elements when prompted.
Input the array values as specified for each test case.
Verify the output matches the expected result.*/

#include <stdio.h>

int main()
{
    int num_elements, i;
    int sum = 0;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &num_elements);

    int array[num_elements];

    printf("Enter %d elements: ", num_elements);
    for (i = 0; i < num_elements; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < num_elements; i++)
    {
        sum += array[i];
    }

    printf("Sum of the elements: %d\n", sum);

    return 0;
}