#include<stdio.h>
#include<conio.h>
void main()
{ int i,n;
  printf("enter the number\n");
  scanf("%d",&n);
  i=1;
  while(i<=10)
  {
    printf("\t %d * %d = %d",n,i,n*i);
    printf("\n");
    i++;
    }
   getch();
}
