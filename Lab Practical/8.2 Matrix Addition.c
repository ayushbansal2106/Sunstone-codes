/*Write a C program to Add two matrices and store the result in a third matrix.
Instruction
Write a C program to add two matrices. Start by defining a maximum size for the matrices and input the number of rows and columns.
Input the elements for both matrices from the user.
Compute the sum of the corresponding elements of the two matrices and store the result in a third matrix.
Display the resultant matrix after the addition.*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}