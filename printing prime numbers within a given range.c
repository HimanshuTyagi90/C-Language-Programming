#include<stdio.h>
#include<conio.h>

main()
{
  int a,b,i,j,n;
  printf("\n enter the range between A and b:\n");
  scanf("%d %d",&a,&b);
  if(a<0||b<0)
  {
      if(a<0)
      {
    printf("\n Any number less then zero can't be a prime number. Plese change the Lower range %d",a);
      }
      else
        if(b<0){
    printf("\n Any number less then zero can't be a prime number. Plese change the Upper range %d",b);
      }
  }
  else
  if(a<b){
     for(n=a;n<b;n++)
     {
       for(i=2;i<n;i++)
       {
         if(n%i==0)
         break;
       }
     if(n==i)
     printf(" %d",n);
     }
     getch();
     }
     else
     if(a>b){
       for(n=b;n<a;n++)
     {
       for(i=2;i<n;i++)
       {
         if(n%i==0)
         break;
       }

     if(n==i)
     printf(" %d",n);
     }
     getch();
       }
     }
