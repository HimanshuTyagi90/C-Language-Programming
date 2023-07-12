#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c,k;
   float t;
   while(1)
  {

  printf("\n\nEnter the number of operation you want to perform");
   printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit \n\n");
    scanf("%d",&k);
   if(k==1)
     {
       printf("\n you have selected Addition.");
       printf("\n enter the two numbers A and B :\n");
       scanf("%d %d",&a,&b);
       c=a+b;
       printf("\n sum of %d and %d is %d",a,b,c);
       getch();
     }
   else
       if(k==2)//subtraction
       {
         printf("\n you have selected Subtraction.");
         printf("enter the value of A and B:\n");
         scanf("%d %d",&a,&b);
         c=a-b;
         printf("\n the answer is %d",c);
         getch();
       }
       else
         if(k==3)
         {
           printf("\n you have selected multiplication.");
           printf("\n enter the numbers:\n");
           scanf("%d %d",&a,&b);
           c=a*b;
           printf("\n The answer is %d",c);
           getch();
         }
         else
           if(k==4)
           {
             printf("\n you have selected Division");
             printf("\n enter the two numbers where a>b:\n");
             scanf("%d %d",&a,&b);
             t=(float)a/b;
             printf("the answer is %.2f",t);
             getch();
           }
           else
            if(k==5)
                exit(0);
           }
}

