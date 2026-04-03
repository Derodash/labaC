#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main()
{
    int n, i, j;
    char op;
	printf("n = ");
    scanf("%d", &n);

    double** A = (double**)malloc(n * sizeof(double*));
    double** B = (double**)malloc(n * sizeof(double*));

    for (i = 0; i < n; i++)
    {
        A[i] = (double*)malloc(n * sizeof(double));
        B[i] = (double*)malloc(n * sizeof(double));
    }

    printf("A:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", &A[i][j]);

    printf("B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", &B[i][j]);

    printf("op: ");
    scanf(" %c", &op);

    double** C = calc(A, B, n, op);

    printf("Result:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%.2lf ", C[i][j]);
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
