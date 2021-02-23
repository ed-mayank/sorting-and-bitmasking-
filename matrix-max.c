#include <stdio.h>
int main()
{
    int row,col,i,j,sumrow=0,sumcol=0;
    scanf("%d%d",&row,&col);
    
    int A[row][col];
    int B[1000];
    int C[1000];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        scanf("%d",&A[i][j]);
    }

    printf("\n\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        printf("%d ",A[i][j]);
        printf("\n");

    }
    printf("\n\n");

    for(i=0; i < row; i++)
    {
        for(j=0; j<col; j++)
        {   if(j==0)
            B[i] = A[i][0];
            if(A[i][j] > B[i])
            B[i] = A[i][j];
        }
    }

    for(i=0; i < col; i++)
    {
        for(j=0; j<row; j++)
        {   if(j==0)
            C[i] = A[0][i];
            if(A[j][i] > C[i])
            C[i] = A[j][i];
        }
    }

    for(i=0; i<row ; i++)
    {
        sumrow += B[i];
    }

    for(j=0; j<col ; j++)
    {
        sumcol += C[j];
    }

    printf("%d %d\n",sumrow,sumcol);

return 0;

}