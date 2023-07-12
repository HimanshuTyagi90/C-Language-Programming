#include<stdio.h>
#include<conio.h>

long power(int x,int n)
{
  long f=1;
  if(n<=0)
  {
    return(1);
   }
   else
   {
     f=x*power(x,(n-1));
     return(f);
   }
}

void main()
{
   int x,n;
   long pow;
   printf("\n enter the number as X and power as N:\n");
   scanf("%d %d",&x,&n);
   pow=power(x,n);
   printf("\n Answer is %ld",pow);
   getch();

   }

