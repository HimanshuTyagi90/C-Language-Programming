#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i,n;
  printf("enter the range A to B res.\n");
  scanf("%d %d",&a,&b);
  printf(" Prime numbers between %d and %d are:",a,b);
  for(n=a;n<=b;n++)
    {
      for(i=2;i<n;i++)
      {
          if(n%i==0)
           {
               break;
                        }
      }


      if(n==i)
        printf("\n %d",n);
    }

  getch();
}
