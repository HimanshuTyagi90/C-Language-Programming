#include<stdio.h>
#include<conio.h>
void main()
{
  int a=0,b=1,c,e=0,i;
  printf("%d",e);
  for(i=1;i<10;i++)
  {
    printf(" %d",b);
    c=a+b;
    a=b;
    b=c;
  }
  getch();
}
