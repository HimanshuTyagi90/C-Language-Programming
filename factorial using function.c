#include<stdio.h>
#include<conio.h>

long fact(int x);
void main()
{
  int n; long a;
  printf("\n enter the number.\n");
  scanf("%d",&n);
  a=fact(n);
  printf("\n the factorial of %d is %ld",n,a);
  getch();
  }

  long fact(int x)
  {
    int i; long mul=1;
    for(i=1;i<=x;i++)
    {
      mul=mul*i;
    }
  return(mul);
  }
