/*Write a C program to Implement functions to perform matrix addition and multiplication.
Instruction
Enter the dimensions and elements for two matrices.
Implement functions to perform matrix addition and multiplication.
Print the result of matrix addition (if possible).
Print the result of matrix multiplication (if possible).*/

#include <stdio.h>

void addMatrices(int r1, int c1, int mat1[r1][c1], int mat2[r1][c1], int result[r1][c1])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int r1, int c1, int mat1[r1][c1], int r2, int c2, int mat2[r2][c2], int result[r1][c2])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int mat[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix:\n");
    scanf("%d %d", &r2, &c2);

    int mat1[r1][c1], mat2[r2][c2];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    if (r1 == r2 && c1 == c2)
    {
        int addResult[r1][c1];
        addMatrices(r1, c1, mat1, mat2, addResult);
        printf("Matrix Addition Result:\n");
        printMatrix(r1, c1, addResult);
    }
    else
    {
        printf("Matrix addition not possible due to dimension mismatch.\n");
    }

    if (c1 == r2)
    {
        int multiplyResult[r1][c2];
        multiplyMatrices(r1, c1, mat1, r2, c2, mat2, multiplyResult);
        printf("Matrix Multiplication Result:\n");
        printMatrix(r1, c2, multiplyResult);
    }
    else
    {
        printf("Matrices cannot be multiplied.\n");
    }

    return 0;
}