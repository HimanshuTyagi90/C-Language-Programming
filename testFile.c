#include<stdio.h>
#include<conio.h>
int addition(int a, int b)
{
 int y;
 y=a+b;
 return(y);
}

void main()
{
  int a,b,sum;
  printf("\n enter two numbers to be added\n");
  scanf("%d %d",&a,&b);
  sum=addition(a,b);
  printf("sum of %d and %d is %d",a,b,sum);
  getch();
}
