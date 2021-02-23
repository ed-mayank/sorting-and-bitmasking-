#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int readN(void)
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);
    if (N == 1)
    {
        printf("Error!");
        exit(0);
    }
    return N;
}

bool isPrime(int N)
{
    bool prime = true;

    for (int i = 2; i <= N - 1; ++i)
    {
        if (N % i == 0)
        {
            prime = false;
            break;
        }
    }
    return N;
}
void main()
{
    int i;
    int N;

    N = readN();

    if (isPrime(N))
        printf("%d is prime\n", N);
    else
        printf("%d is composite\n", N);
}