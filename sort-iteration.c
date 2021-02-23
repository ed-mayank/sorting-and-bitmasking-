#include <stdio.h>

void main()
{
    int N;
    printf("Enter N numbers to sort : ");
    scanf("%d", &N);

    int A[N], i;

    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    for (i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i] > A[j])
            {
                int a = A[i];
                A[i] = A[j];
                A[j] = a;
            }
        }
    }
    printf("\nSorted content\n");
    for (i = 0; i < N; i++)
        printf("%d\n", A[i]);
}