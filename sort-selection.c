#include <stdio.h>

int MinIndex(int A[], int N)
{
    int min = A[0], minindex = 0;

    for (int i = 1; i < N; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            minindex = i;
        }
    }
    return minindex;
}

void sort(int A[], int N)
{
    int t, minindex = MinIndex(A, N);
    
    if (N > 1)
    {
        t = A[0];
        A[0] = A[minindex];
        A[minindex] = t;

        sort(&A[1], N - 1);
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