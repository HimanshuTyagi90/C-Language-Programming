#include<stdio.h>
#include<conio.h>
void main()
{ int i,num,fact;
  printf("enter the number\n");
  scanf("%d",&num);
  i=1;
  fact=1;
  while(i<=num)
  {
    fact=fact*i;
    i++;
    }
    printf("the factorial value of %d is %d",num,fact);
   getch();
}
