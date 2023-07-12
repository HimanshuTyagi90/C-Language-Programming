#include<stdio.h>
#include<conio.h>

long armstrong(long x);
void main()
{
  long a,b,n,e,arm;
  printf("enter the range from A to B:\n");
  scanf("%ld %ld",&a,&b);
  for(n=a;n<=b;n++)
  {
  e=n;
  arm=armstrong(n);

  if(arm==n)
  printf("\n %d is armstrong number.",n);
  }
  getch();
}

  long armstrong(long n)
  {
    long rev=0,d;
    while(n>0)
    {
      d=n%10;
      rev=rev+(d*d*d);
      n=n/10;
    }

    return(rev);

  }
