#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NAME_LENGTH 20
#define LIST_LENGTH 100

//we are reading names as inputs here
int readNames(char names[][NAME_LENGTH])
{
    int i = 0;
    while (scanf("%s", &names[i][0]) == 1)
    {
        i = i + 1;
        if (i == LIST_LENGTH)
            break;
    }

    return i;
}

//we are printing read names given in input
void printNames(char names[][NAME_LENGTH], int total)
{
    int j;
    for (j = 0; j < total; j++)
        printf("%s\n", &names[j][0]); // since we are printing string so we have to pass address of 1st col of jth row
}

//swapping adjacent names called in sortNames function
void swap(char *str1, char *str2)
{
    char temp[NAME_LENGTH + 1];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

//sorting names here
void sortNames(char names[][NAME_LENGTH], int total)
{
    for (int i = 0; i < total; i++)
    {
        bool anyswap = false;
        for (int j = 0; j < total; j++)
        {
            if (strcmp(&names[j][0], &names[j + 1][0]) > 0)
            {
                swap(&names[j][0], &names[j + 1][0]);
                anyswap = true;
            }
        }
        if (anyswap == false)
            break;
    }
}

int main()
{
    
    char names[LIST_LENGTH][NAME_LENGTH];

    int total;

    total = readNames(names);
    printNames(names, total);

    sortNames(names, total);

    printf("\nSorted Names\n\n");
    printNames(names, total);
}