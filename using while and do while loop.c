// using while and do while loop or difference between them.

#include<stdio.h>
#include<conio.h>

void main()
{
  int x;
  printf(" table of 2 using do and while loop:");
  x=1;
  printf("\nthis is while loop:\n");
  while(x<=10)
  {
     printf("\n 2 * %d = %d",x,2*x);
     x++;
  }
   printf("\n\n this is do while loop:\n\n");



  do{
        x=11;
    printf("\n 2 * %d = %d",x,2*x);
  }
  while(x<10);

  printf("\n please open the source code of this program to understand the syntax difference.");

  getch();
}
