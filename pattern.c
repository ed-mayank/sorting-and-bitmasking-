#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      
    int A[2*n-1][2*n-1];
    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            A[i][j] = n-j;
            A[i][2*n-2-j] = n-j;
            A[2*n-2-i][j] = n-j;
            A[2*n-2-i][2*n-2-j] = n-j;
        }
        for(int j=i; j<2*n-1-i; j++)
        {
            A[i][j] = n-i;
            A[2*n-2-i][j] = n-i;
        }
    }

    for(i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}