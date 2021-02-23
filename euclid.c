#include <stdio.h>
int main()
{
    int m, n, i, max, min, rem, gcd = 1;
    printf("Enter m and n: ");
    scanf("%d%d", &m, &n);

    max = m;
    min = n;
    if (n > m)
    {
        max = n;
        min = m;
    }

    for (i = 0; i < min; i++)
    {
        rem = max % min;

        
        if (rem == 0)
        {
            gcd = min;
            break;
        }
        else
        {
            max = min;
            min = rem;
        }
    }

    printf("GCD is %d\n", gcd);
}