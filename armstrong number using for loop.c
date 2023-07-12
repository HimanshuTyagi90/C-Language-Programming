#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,i,r,rev,n;
   printf("enter the range A and B:\n");
   scanf("%d %d",&a,&b);
   i=1;
   while(i<200)
   {
     int temp=i;
      while(i>0)
      {
         r=n%10;
         rev=rev+(r*r*r);
         n=n/10;
      }
      if(temp==rev)
      printf("%d is armstrong number",rev);
      i++;
   }
  getch();

}
