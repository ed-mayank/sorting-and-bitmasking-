#include <stdio.h>

int power(int a,int b)
{
    int num=1;
    
    for(int i=0; i<b; i++)
    num *= a;

    return num;
}

int main()
{
    int number,frombase,tobase,base10=0,digit,basex=0,x;

    printf("Enter number : ");
    scanf("%d",&number);

    printf("Enter base in which entered number is : ");
    scanf("%d",&frombase);

    printf("Enter base in which you want to convert: ");
    scanf("%d",&tobase);

    for(int i=0; number > 0; i++)
    {
        digit = number % 10;
        base10 += digit*power(frombase,i);
        number /= 10;
    }

    printf("%d\n",base10);

    for( int i=0; base10 >0; i++)
     {
         x = base10 % tobase;
         basex += x* power(10,i);

         base10 /= tobase; 

     }

     printf("%d\n",basex);

     return 0;


}