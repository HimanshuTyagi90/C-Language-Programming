#include<stdio.h>
#include<conio.h>
void main()
{
 int i,num,fact;
  printf(" enter the number\n");
  scanf("%d",&num);
  fact=1;
  for(i=1;i<=num;i++)
  {
    fact=fact*i;}
    printf("factorial of %d is %d",num,fact);
   getch();
}
