#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    int m1[3][3],m2[3][3],sum[3][3];

    printf("\n\n\n program to add two matrices A and B of order 3*3 only---->>>\n\n\n");




    // inputting elements of matrix A one by one using loop.

    printf("\n\nenter the elements of matrix A one by one-->>\n");
    for(i=0;i<3;i++)//loop for row
    {
        printf("\n");
        for(j=0;j<3;j++)// loop for column
        {
            printf("\nEnter the vale of element A%d%d:\t\t",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }

    // inputting elements of matrix B one by one using loop.

    printf("\n\nenter the elements of Matrix B one by one-->>\n");
    for(i=0;i<3;i++)//loop for row
    {
        printf("\n");
        for(j=0;j<3;j++)// loop for column
        {
            printf("\nenter the vale of element B%d%d:\t\t",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }

    // performing addition of mat A and B.

     for(i=0;i<3;i++)//loop for row
    {
        for(j=0;j<3;j++)// loop for column
        {
            sum[i][j]=(m1[i][j])+(m2[i][j]);
        }
    }

     // Printing the operation and result---->>>

      //printing mat A
      printf("\n\nthe sum of Matrix A\n");
       for(i=0;i<3;i++)//loop for row
    {
        printf("\n");
        for(j=0;j<3;j++)// loop for column
        {
            printf("%d\t",m1[i][j]);
        }
    }

    //printing mat B
     printf_s("\n\nthe Matrix B\n");
       for(i=0;i<3;i++)//loop for row
    {
        printf("\n");
        for(j=0;j<3;j++)// loop for column
        {
            printf("%d\t",m2[i][j]);
        }
    }

    //printing result
    printf("\n is:---->>>\n");
      for(i=0;i<3;i++)//loop for row
    {
        printf("\n");
        for(j=0;j<3;j++)// loop for column
        {
            printf("%d\t",sum[i][j]);

        }
    }
}
