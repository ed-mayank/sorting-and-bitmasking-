#include <stdio.h>

int MaxIndex(int A[], int N)
{
    int max = A[0], maxindex = 0;

    for (int i = 1; i < N; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            maxindex = i;
        }
    }
    return maxindex;
}

void sort(int A[], int N)
{
    int t, maxindex = MaxIndex(A, N);
    
    if (N > 1)
    {
        t = A[N - 1];
        A[N - 1] = A[maxindex];
        A[maxindex] = t;

        sort(A, N - 1);
    }
}

void main()
{
    int N;

    printf("Enter N numbers to sort: ");
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    sort(A, N);

    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);

    printf("\n");
}