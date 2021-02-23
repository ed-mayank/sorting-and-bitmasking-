#include <stdio.h>

void swap(char *ptrA, char *ptrB)
{
    char temp;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void permute(char A[], int l, int r)
{
    if (l == r)
        printf("%s\n", A);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(&A[l], &A[i]);
            permute(A, l + 1, r);
            swap(&A[l], &A[i]);
        }
    }
}
int main()
{
    int n;
    printf("Enter length of string: ");
    scanf("%d", &n);

    char A[n];
    printf("Enter string: ");
    scanf("%s", A);

    permute(A, 0, n - 1);
}