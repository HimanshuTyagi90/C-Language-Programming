#include<stdio.h>
#include<conio.h>

void main()
{
   int A[10]={21,22,23,24,25,26,27,48,19};
   int i,B[10];
   printf("\n Copying array list into second list-->\n\n");
   printf("we have elements:  21,22,23,24,25,26,27,48,19\n\n");
   for(i=0;i<10;i++)
   {
      B[i]=A[i];
   }
   printf("copied list is: \n");
   for(i=0;i<9;i++)
   printf("\t\t%2d\n",B[i]);
   getch();
}
