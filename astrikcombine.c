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
      for(i=5;i>=1;i--)
   {
     for(k=5;k>i;k--)
     {
       printf(" ");
       }
   for(j=1;j<=i;j++)
   {
     printf("*");
     }
     printf("\n");
     }
  getch();
           }
