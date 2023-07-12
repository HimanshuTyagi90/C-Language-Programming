#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  int i,j;
  printf("enter the number:");
  scanf("%d",&i);
  j=1;
  do{

     printf("\n %d * %d = %d",i,j,i*j);
     j++;
  }
  while(j<=10);
}
