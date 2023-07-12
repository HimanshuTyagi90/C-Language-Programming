#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j;
   int mat[3][3];

   printf("\n\n\n Program to print Lower Diagonal Matrix of order 3*3:---->>>>");

   //inputting elements of LDP..
   printf("\n\n\n Enter the elements of matrix one by one:\n\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       scanf("%d",&mat[i][j]);
       }
   }

   //printing matrix.
    printf("\n Matrix is :--->>>\n");
   for(i=0;i<3;i++)
   {
     printf("\n");
     for(j=0;j<3;j++)
     {
             printf("%d\t",mat[i][j]);
         }
       }

   // Printing LDP.
   printf("\n\n\n The Lower Diagonal Matrix is:--->>>\n");
   for(i=0;i<3;i++)
   {
     printf("\n");
     for(j=0;j<3;j++)
     {
         if(i>=j)
         {
             printf("%d\t",mat[i][j]);
         }
       else
        continue;
       }
   }
}
