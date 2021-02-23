#include <stdio.h>
#include <string.h>

typedef struct 
{
    int roll_no;
    char name[21];
    int marks;
}student;

void readData(student A[], int N)
{
    int i;
    printf("Enter roll_No of %d students: ",N);
    for(i=0; i<N; i++)
    scanf("%d",&A[i].roll_no);

    printf("Enter Names of %d students: ",N);
    for(i=0; i<N; i++)
    scanf("%s",A[i].name);

    printf("Enter marks of %d students: ",N);
    for(i=0; i<N; i++)
    scanf("%d",&A[i].marks);
}

void sortData(student A[], int N)
{
    int j,i,k=0,t;
    char temp[21];

    for(i=0; i<N; i++)
    {
        for(j=0; j<N-1; j++)
        {
            if(A[j].roll_no > A[j+1].roll_no)
            {
                t = A[j+1].roll_no;
                A[j+1].roll_no = A[j].roll_no;
                A[j].roll_no = t;

                strcpy(temp,A[j+1].name);
                strcpy(A[j+1].name , A[j].name);
                strcpy(A[j].name , temp);

                t = A[j+1].marks;
                A[j+1].marks = A[j].marks;
                A[j].marks = t;

                k++;
            }
        }

        if(k == 0)
        break;
        k=0;
    }
}

void printData(student A[], int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("%d\t%s\t%d\n",A[i].roll_no, A[i].name, A[i].marks);
    }
}
int main()
{
    int N;
    printf("Enter number of students: ");
    scanf("%d",&N);

    student A[N];

    readData(A,N);
    sortData(A,N); // Bubble sorting data according to roll_no
    printData(A,N);

}