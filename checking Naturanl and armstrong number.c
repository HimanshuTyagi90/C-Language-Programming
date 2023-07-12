#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,n,i,r,num;
  printf("\n enter the range between A and B:");
  scanf("%d %d",&a,&b);
  if(a<0||b<0)
  printf("\n invalid input");
  else
  {
    for(i=a;i<=b;i++)
    {
      n=i;
      while(n>0)
      {
        r=n%10;
        num=num+r*r*r;
        n=n/10;
      }
      if(num==n)
      printf(" %d",n);

    }
  }
     getch();
}
