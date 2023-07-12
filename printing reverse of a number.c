#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r,s=0;
   printf("\n enter the number\n");
   scanf("%d",&n);
   while(n!=0)
   {
     r=n%10;
     s=s*10+r;
     n=n/10;
   }

  printf("\n reverse is %d",s);
  getch();
}
