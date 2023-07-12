#include<stdio.h>
#include<conio.h>

void main()
{
   int A[10]={21,22,23,24,25,26,27,48,19,50};
   int B[10];
   int i,count;
   count=9;
   printf("reversing copying any array list-->\n\n");
   for(i=0;i<10;i++)
   {
     B[count]=A[i];
     count--;
   }

   printf(" S.NO.  Original ---> Copied\n");
   for(i=0;i<10;i++)
   printf("  %d      %2d --> %2d\n",i+1,A[i],B[i]);
   getch();
}
