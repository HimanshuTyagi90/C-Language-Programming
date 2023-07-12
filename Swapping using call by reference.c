#include<stdio.h>
#include<conio.h>

int swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main()
{
  int a,b;
  printf("\b enter value of A and B \n");
  scanf("%d %d",&a,&b);
  printf("\nBefore swapping value of A=%d and B=%d\n",a,b);
  swap(&a,&b);
  printf("After swapping value of A=%d and B=%d",a,b);
  getch();
  return(1);
}
