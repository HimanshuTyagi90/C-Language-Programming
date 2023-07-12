#include<stdio.h>
#include<conio.h>

long fact(int n)
{
  long f;
  if(n<=0)
  return(1);
  else
  {
  f=n*fact(n-1);
  return(f);
  }
}

void main()
{
   int n,r;
   long ncr;
   printf("\n enter the value of n and r, where n>r\n");
   scanf("%d %d",&n,&r);
   ncr=fact(n)/(fact(r)*fact(n-r));
   printf("\n binomial coefficient is %ld",ncr);
   getch();
   }
