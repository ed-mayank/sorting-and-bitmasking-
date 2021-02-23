#include <stdio.h>
int main()
{
    char A[3] = {'a','b','c'};

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<3; j++)
        {
            int f = i & (1 << j);
            if(f != 0)
            printf("%c ",A[j]);
        }
        printf("\n");
    }
}