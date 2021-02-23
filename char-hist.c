#include <stdio.h>

#define N 26

void main()
{
    int letterhist[N] = {0}, index;
    float count = 0;
    char c;

    while (scanf("%c", &c) == 1)
    {
        if (c >= 'A' && c <= 'Z')
            index = c - 'A';
        else if (c >= 'a' && c <= 'z')
            index = c - 'a';
        else
            continue;

        letterhist[index]++;
        count++;
    }

    printf("\tLetter Histogram\n");
    for (int i = 0; i < N; ++i)
    {
        printf("%c -- %d -- %.2f\n", 'A' + i, letterhist[i], (letterhist[i] / count) * 100);
        
    }
}