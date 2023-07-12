#include<stdio.h>
#include<conio.h>

long fact(int n) {
    int i; long mul=1;
    for(i=1;i<=n;i++)
    {
      mul=mul*i;
    }
  return(mul);
  }

void main()
{
  int n,r; long ncr,g;
  printf("\n enter the value of n and r respectively where n>r.\n");
  scanf("%d %d",&n,&r);
   g=n-r;
  ncr=fact(n)/(fact(r)*fact(g));
  printf("\n bionomial coefficient is %ld",ncr);
  getch();
  }

