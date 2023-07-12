#include<stdio.h>
#include<conio.h>

long factorial(int x) {
    int i; long mul=1;
    for(i=1;i<=x;i++)
    {
      mul=mul*i;
    }
  return(mul);
  }

  int main()
  {
    int n,r;
    long ncr;
    printf("\n enter the vlaue of n and r where N>R\n");
    scanf("%d %d",&n,&r);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("Binomial Coefficient is %ld",ncr);
    return(0);
  }
