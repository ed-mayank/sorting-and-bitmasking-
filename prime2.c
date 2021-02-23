#include <stdio.h>

void main()
{
    int i, n;

    printf("Enter the natural number to check whether it is prime or composite : ");
    scanf("%d", &n);

    if (n == 1)
        printf("Number is neither prime nor composite\n");
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i < n)
            printf("number is composite\n");
        else
            printf("number is prime\n");
    }
}