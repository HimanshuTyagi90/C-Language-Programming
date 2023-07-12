#include<stdio.h>
#include<conio.h>

long factorial(long n)
{
    long f=1;
    if(n>=1)
    {
        f=n*factorial(n-1);
        return(f);
    }
    else
        return(1);
}

void main()
{
    long fact,n;
    printf("enter the number:\n");
    scanf("%ld",&n);
    fact=factorial(n);
    printf("%ld is the factorial of %ld",fact,n);
    getch();
}
