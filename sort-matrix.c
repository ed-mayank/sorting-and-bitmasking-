#include <stdio.h>
int main()
{
    int m, n, i, j, k, l;
    scanf("%d %d", &m, &n);
    int A[m][n];
    int temp[1][1];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }

    for (l = 0; l < m; l++)
    {
        for (i = 0; i < m - 1; i++)  // iteration in whole matrix
        {
            for (j = 0; j < n; j++)
            {
                if (A[i][j] < A[i + 1][j])
                    break;

                if (A[i][j] > A[i + 1][j])  // bubble sort
                {
                    for (k = 0; k < n; k++) // swapping row
                    {

                        temp[0][0] = A[i][k];
                        A[i][k] = A[i + 1][k];
                        A[i + 1][k] = temp[0][0];
                    }
                    break;
                }
            }
        }
    }
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}