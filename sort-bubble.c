#include <stdio.h>
int main()
{
    int a, i, j, k = 0, t;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter numbers: ");
    int A[a];

    for (i = 0; i < a; i++)
        scanf("%d", &A[i]);

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                t = A[j + 1];
                A[j + 1] = A[j];
                A[j] = t;
                k++;
            }
        }

        if (k == 0)
            break;

        k = 0;
    }

    for (i = 0; i < a; i++)
        printf("%d ", A[i]);

    printf("\n");
}