#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  printf("enter a number\n");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      printf("Non-prime.");
      break;
    }
  }
  if(n==i)
  { printf("prime number");
  }
  getch();
  }
