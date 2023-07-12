#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k;
    int r1,r2,c1,c2;
    int m1[3][3],m2[3][3],m3[3][3];

    printf("\n\n\n Program for Multiplication of two matrices A and B of order given by user only---->>>\n\n\n");



      /*

      ***************************************************************

     Here inputs for matrix A starts.

     */

    printf("\n enter the number of rows of Matrix A:\t");
    scanf("%d",&r1);// taking rows of matrix A

    printf(" enter the number of columns of Matrix A:");
    scanf("%d",&c1);// taking columns of matrix A

    printf("\n enter the number of rows of Matrix B:\t");
    scanf("%d",&r2);// taking rows of matrix B

    printf("\n enter the number of columns of Matrix B:");
    scanf("%d",&c2);// taking columns of matrix B
    printf("\n\n");
    // printing the orders of both matrices

    printf(" Order of Matrix A is %d * %d \n\n order of Matrix B is %d * %d\n\n",r1,c1,r2,c2);

    // throwing !Error message if orders are not same.

    if(c1!=r2)
        printf(" The No. of columns in Matrix A and NO. of rows in Matrix B is not same, !Multiplication is not possible, please change the colum value of Matrix A or row value of Matrix B\n");

        else// if c1==r2 same then proceding.
            {

    // inputting elements of matrix A one by one using loop.

    printf("\n\nenter the elements of matrix A one by one-->>\n");
    for(i=0;i<3;i++)//loop for row
    {
        printf("\n");
        for(j=0;j<3;j++)// loop for column
        {
            printf("\nEnter the value of element A%d%d:\t\t",i+1,j+1);
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
            printf("\nenter the value of element B%d%d:\t\t",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }

    // performing multiplication of mat A and B.

     for(i=0;i<3;i++)//loop for row
    {
        for(j=0;j<3;j++)//this loop selects elements to be multiplied a11*b11, a12*b21, a13*b31 and so onn......
        {
            m3[i][j]=0;
            for(k=0;k<3;k++)// loop for column
            {
               m3[i][j]=m3[i][j]+((m1[i][k])*(m2[k][j]));

            }
        }
    }


     // Printing the operation and result---->>>

      //printing mat A
      printf("\n\nthe multiplication of Matrix A\n");
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
            printf("%d\t",m3[i][j]);

        }

    }
}
     return(0);
}
