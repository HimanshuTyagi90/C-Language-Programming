#include<stdio.h>
#include<conio.h>
 int main()
 {
     int a,b,c;
     printf("enter two numbers to compare\n");
     scanf("%d %d",&a,&b);
     printf("you have entered A=%d and B=%d",a,b);
     c=a;
     a=b;
     b=c;
     printf("\n after swapping the value of a=%d and b=%d",a,b);
     getch();
       return(0);
 }
