#include <stdio.h>

int a;

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

void search(int A[], int N)
{
    int middle = N / 2;

    if (A[middle] == a)
        printf("Entered number Found\n");

    else if (N == 1)
        printf("Entered number Not found\n");

    else if (A[middle] > a)
        search(A, middle);

    else if (A[middle] < a)
    {
        if (N % 2 == 0)
            search(&A[middle], middle);
        else
            search(&A[middle], middle + 1);
    }
}

void main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    int A[N];

    printf("Enter those numbers\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    printf("Enter number to search: ");

    scanf("%d", &a);

    sort(A, N);
    search(A, N);
}