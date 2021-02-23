#include <stdio.h>
int main()
{
   int order,total_subsets,i,mask,j;
   printf("Enter cardinality of set: ");
    scanf("%d",&order);

    int A[order];
    printf("Enter elements of set: ");
    for(i=0; i<order; i++)
    {
        scanf("%d",&A[i]);
    }

    total_subsets = 1<< order;

    printf("{}");
    for(i=0; i< total_subsets; i++)
    {
        for(j=0; j<order; j++)
        {
            mask = i & (1 << j);
            if(mask != 0)
            printf("%d ",A[j]);
        }
        printf("\n");
    }

}