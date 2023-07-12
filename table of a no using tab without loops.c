#include<stdio.h>
#include<conio.h>

void main()
{
  int n,t,i=1;
  printf("\n Enter the number:");
  scanf("%d",&n);
  tab:
  t=n*i;
  printf("\n %d",t);
  i++;
  if(i<=10)
  {
    goto tab;
  }
  getech();
}

