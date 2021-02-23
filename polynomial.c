#include <stdio.h>

float power(int i, float x)
{
    float num = 1.0;
    int j;
    for (j = 0; j < i; j++)
        num *= x;

    return num;
}

float sum(float coeff[], int order, float x)
{
    float sumn = 0;
    int i;
    for (i = 0; i <= order; i++)
    {
        sumn += coeff[i] * power(i, x);
    }
    return sumn;
}

float differentiation(float coeff[], int order, float x)
{
    int i;
    float sumn = 0;
    for (i = 0; i < order; i++)
    {
        sumn += coeff[i + 1] * (i + 1) * power(i, x);
    }
    return sumn;
}

float integration(float coeff[], int order, float x)
{
    int i;
    float sumn = 0;

    for (i = 0; i <= order; i++)
    {
        sumn += (coeff[i] * power(i + 1, x)) / (i + 1);
    }
    return sumn;
}

int main()
{

    int order, i, j;

    printf("Enter order ; ");
    scanf("%d", &order);

    float coeff[order + 1];
    float x;

    printf("Enter coefficients : ");
    for (i = 0; i < (order + 1); i++)
        scanf("%f", &coeff[i]);

    printf("Enter the x to find value of polynomial: ");
    scanf("%f", &x);

    printf("%f\n", sum(coeff, order, x));
    printf("%f\n", differentiation(coeff, order, x));
    printf("%f\n", integration(coeff, order, x));
}