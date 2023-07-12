#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j;
   int mat[3][3];

   printf("\n\n\n Program to print  Diagonal elements of  a Matrix of order 3*3:---->>>>");

   //inputting elements of matrix elements..
   printf("\n\n\n Enter the elements of matrix one by one:\n\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       scanf("%d",&mat[i][j]);
       }
   }

   printf("\n   A Matrix is :--->>>\n");
   for(i=0;i<3;i++)
   {
      printf("\n");
     for(j=0;j<3;j++)
     {
             printf("%d\t",mat[i][j]);
         }

       }

   // Printing diagonal elements....
   printf("\n\n\n  Primary Diagonal Elements of A Matrix:--->>>\n");
   for(i=0;i<3;i++)
   {
      printf("\n");
     for(j=0;j<3;j++)
     {
          if(i==j)
             printf("%d\t",mat[i][j]);
         else
            printf(" \t");
       }
   }

   // Printing secondary diagonal elements....



   /*
      Logic of secondary diagonal:---->>>>

      secondary  ==  primary
       i++,j++       i++,j--
   (i=0;i<3;i++) == (i=0;i<3;i++)  == given  == Elements name
   (j=0;j<3;j++)    (j=2;j>=0;j--)    values

      00 01 02       02 01 00       1 2 3    A11 A12 A13
      10 11 12  ==   12 11 10   ==  4 5 6 == A21 A22 A23
      20 21 22       22 21 20       7 8 9    A31 A32 A33


      because we put j=[3-1-j]
    was-->>turns to
      00-->>02 during secondary holds value  3
      11-->>11 during secondary holds value  5
      22-->>20 during secondary holds value  7

for(i=0;i<3;i++)
 for(j=2;j>=0;j--)
    {
          if(i==j)
             printf("%d\t",mat[i][3-1-j]); [// [3-1-j] is the value of j to change element name to required positins.]
         else
            printf("\t");
       }
       ---------------------------------------------------------->>>>>>>>>>>>

*/
   printf("\n\n\n  Secondary Diagonal Elements of A Matrix:--->>>\n");
   for(i=0;i<3;i++)
   {
      printf("\n");
     for(j=2;j>=0;j--)
     {
          if(i==j)
             printf("%d\t",mat[i][3-1-j]);
         else
            printf("\t");
       }
   }
}
