#include<stdio.h>
#include<conio.h>
void main()
{ int a;
  printf("\n enter year in four digits.\n");
  scanf("%d",&a);
  if(a%4==0)
  printf("\n %d is leap year.",a);
  else
  printf("\n %d is not a leap year.",a);
  getch();
  }
