#include<stdio.h>
#include<conio.h>

void main()
{
  long r,n,s=0;
  printf("\n enter the number\n");
  scanf("%ld",&n);
  while(n!=0)
  {
    r=n%10;
    s=s+r;
    n=n/10;
  }

  printf("\n sum of digits is=%ld",s);
  getch();
}
