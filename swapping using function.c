#include<stdio.h>
#include<conio.h>

int swap(int *x,int *y)
{
  int z;
  z=*x;
  *x=*y;
  *y=z;
}

void main()
{
  int a,b;
  printf("\n enter the numbers A and B for swapping:\n");
  scanf("%d %d",&a,&b);
  printf("\n you have entered A=%d and B=%d\n",a,b);
  swap(&a,&b);
  printf("After swapping A=%d and B=%d",a,b);
  getch();
  }
