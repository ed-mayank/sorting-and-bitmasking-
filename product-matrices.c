#include <stdio.h>
int main()
{
    int m, n, p, q, i, j, a;

    printf("Enter order of first matrix (mxn): ");
    scanf("%d%d", &m, &n);

    printf("Enter order of second matrix (pxq): ");
    scanf("%d%d", &p, &q);

    int A[m][n];
    int B[n][q];
    int C[m][q];

    if (p != n)
    {
        printf("ERROR:These matrices can't be multiplied\n");
        goto end;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            C[i][j] = 0;
    }

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }

    printf("\nEnter elements of second matrix:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (a = 0; a < n; a++)
            {
                C[i][j] += A[i][a] * B[a][j];
            }
        }
    }

    printf("\nProduct of matrices is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
end:
    return 0;
}