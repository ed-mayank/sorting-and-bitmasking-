#include <stdio.h>

int max(int a, int b)
{
    int maximum = a;
    if (b > a)
        maximum = b;

    return maximum;
}

int LCS(char A[], char B[], int i, int j)
{
    char c;
    int k = 0;
    
    if (A[i] == '\0' || B[j] == '\0')
        return 0;

    else if (A[i] == B[j])
        return 1 + LCS(A, B, i + 1, j + 1);

    else
        return max(LCS(A, B, i + 1, j), LCS(A, B, i, j + 1));
}
int main()
{
    char A[100];
    char B[100];

    printf("Enter first string sequence: ");
    scanf("%s", A);
    printf("Enter second string sequence: ");
    scanf("%s", B);

    int a;
    a = LCS(A, B, 0, 0);
    printf("Length of longest common subsequence is %d\n", a);
}