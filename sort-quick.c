#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int pivot(int A[],int start, int end)
{
    int i = start-1;
    for(int j=start; j<end; j++)
    {
        if(A[j] < A[end])
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i+1], &A[end]);
    return i+1;
}

void quickSort(int A[], int start, int end)
{
    if(start < end)
    {
        int p = pivot(A,start,end);
        
        quickSort(A,start,p-1);
        quickSort(A,p+1,end);
    }
}

void printSort(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int N;
    printf("Enter length of array: ");
    scanf("%d",&N);

    int A[N];

    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    quickSort(A,0,N-1);
    printSort(A,N);
}