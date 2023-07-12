#include<stdio.h>
#include<conio.h>

long armstrong(long x);
void main()
{
  long n,e,arm;
  printf("enter the number\n");
  scanf("%ld",&n);
  arm=armstrong(n);
  if(arm==n)
  printf("%d is armstrong number.",n);
  else
  printf("%d is not armstrong number.",n);
  getch();
}

  long armstrong(long n)
  {
    long rev=0,d,y;
    while(n>0)
    {
      d=n%10;
      rev=rev+(d*d*d);
      n=n/10;
    }

    return(rev);

  }
