#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ float ci,s,a,p,r,n,d;
   printf("\n enter principle rate and time.\n");
   scanf("%f %f %f",&p,&r,&n);
   d=(1+r/100);
   s=pow(d,n);
   a=p*s;
   ci=a-p;
   printf("\n the compound interest is %.2f",ci);
   getch();
   }
