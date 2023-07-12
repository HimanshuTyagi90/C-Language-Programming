#include<stdio.h>
#include<conio.h>
void main()
{  float p,r,t,si;
   printf("\n enter principle rate and time.\n");
   scanf("%f %f %f",&p,&r,&t);
   si=p*r*t/100;
   printf("\n simple interest is %.2f",si);
   getch();

}
