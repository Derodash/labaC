#include <stdlib.h>
#include "stdlib.h"

double** calc(double** A, double** B, int n, char op)
{
    int i, j, k;

    double** C = (double**)malloc(n * sizeof(double*));

    for (i = 0; i < n; i++)
        C[i] = (double*)malloc(n * sizeof(double));

    if (op == '+')
    {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                C[i][j] = A[i][j] + B[i][j];
    }

    if (op == '-')
    {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                C[i][j] = A[i][j] - B[i][j];
    }

    if (op == '*')
    {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < n; k++)
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
    }

    return C;
}
