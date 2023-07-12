#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,k;
  for(i=1;i<=5;i++)
  {  //print spaces.
      for(k=5;k>i;k--)
     {    printf(" ");
    }
  // print numbers.
    for(j=1;j<=i;j++)
    { printf("*");
    }
    // print new line.
      printf("\n");
      }
  getch();
           }
