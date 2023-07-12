#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,c;
  printf("\n enter three numbers A,B and C.\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b)
  {if(a>c)
  printf("\n A is greatest.");
  else //c>a
  printf("\n C is greater.");
  }
  else //b>a
  { if(b>c)
  printf("\n B is greatest.");
  else
  printf("\n C is greatest.");
  }
  getch();
  }
