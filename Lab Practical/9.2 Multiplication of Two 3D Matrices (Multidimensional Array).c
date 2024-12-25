/*Write a C program to Multiply two 3D matrices and store the result in a third matrix.
Instruction
Define two 3D matrices A and B of size 2x2x2, and initialize them with user input.
Multiply corresponding elements of matrices A and B and store the results in a third matrix C.
Display the resulting matrix C after the multiplication.*/

#include <stdio.h>

int main()
{
    int A[2][2][2], B[2][2][2], C[2][2][2];

    printf("Enter elements of matrix A (2 x 2 x 2):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                scanf("%d", &A[i][j][k]);

    printf("Enter elements of matrix B (2 x 2 x 2):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                scanf("%d", &B[i][j][k]);

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                C[i][j][k] = A[i][j][k] * B[i][j][k];

    printf("Result matrix C (2 x 2 x 2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
                printf("%d ", C[i][j][k]);
            printf("\n");
        }
        if (i < 1)
            printf("\n");
    }

    return 0;
}