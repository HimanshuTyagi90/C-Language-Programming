#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j,k,a=0;
  for(i=1;i<=4;i++)
  {
      for(k=5;k>=i;k--)
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          a++;
          printf(" %d",a);
      }
      printf("\n");
  }
      getch();
}
