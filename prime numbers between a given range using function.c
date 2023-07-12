#include<stdio.h>
#include<conio.h>

int prime(int x, int y)
{
  int i,n;
  for(n=x;n<y;n++)
  {
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      break;
    }
   if(n==i)
   {
     printf("\n %d",n);
}
   }

}
}

void main()
{
  int a,b,prm;
  printf("enter the range A to B res.\n");
  scanf("%d %d",&a,&b);
  printf(" Prime numbers between %d and %d are:",a,b);
  prime(a,b);
  getch();
}
