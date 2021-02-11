#include <stdio.h>

int readBit(int n, int i)
{
    return n & (1 << i) ? 1 : 0;
}

void printbits(int n){
    printf("(%d)_2 : ",n);
    for(int i= 8 * sizeof(int)-1; i>=0; i--)
    {
        printf("%d",readBit(n,i));
        if(i % 8 == 0)
        printf(" ");
    }
    printf("\n");
}

void clearbit(int n, int a)
{
    int b = n & ~(1 << a);
   
    printbits(b);
}

void setbit(int n, int i)
{
    unsigned int set = 1 << i;
    printbits(n | set);
}
int main()
{
    int n,b,a;
    printf("Enter n: ");
    scanf("%d",&n);
    printbits(n);

    printf("Enter position to clear bit: ");
    scanf("%d",&a);

    clearbit(n,a);
    printf("Enter position to set Bit: ");
    scanf("%d",&b);
    setbit(n,b);

}