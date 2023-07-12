#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,r1,r2,c1,c2;
    int m1[r1][c1],m2[r2][c2],sum[r2][c1];

    printf("\n\n\n program to add two matrices A and B---->>>\n\n\n");

    // Here inputs for matrix A starts.

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

    if(r1!=r2||c1!=c2)
        printf(" The order of Matrix A and Matrix B is not same, !Addition not possible, please change the order\n");

        else// if orders are same then proceding.
            {
    // inputting elements of matrix A one by one using loop.

    printf("\nenter the elements of matrix A one by one-->>\n");
    for(c=0;c<r1;c++)//loop for row
    {
        for(d=0;d<c1;d++)// loop for column
        {
            printf("\nEnter the value of element A%d%d:\t\t",c+1,d+1);
            scanf("%d",&m1[c][d]);
        }
    }

    // inputting elements of matrix B one by one using loop.

    printf("\nenter the elements of Matrix B one by one-->>\n");
    for(c=0;c<r2;c++)//loop for row
    {
        for(d=0;d<c2;d++)// loop for column
        {
            printf("\nenter the value of element B%d%d:\t\t",c+1,d+1);
            scanf("%d",&m2[c][d]);
        }
    }

    // performing addition of mat A and B.

     for(c=0;c<r1;c++)//loop for row
    {
        for(d=0;d<c1;d++)// loop for column
        {
            sum[c][d]=(m1[c][d])+(m2[c][d]);
        }
    }

     // Printing the operation and result---->>>

      //printing mat A
      printf("the sum of Matrix A\n");
       for(c=0;c<r1;c++)//loop for row
    {
        for(d=0;d<c1;d++)// loop for column
        {
            printf("%d\t",m1[c][d]);
        }
    }

    //printing mat B
     printf_s("the Matrix B\n");
       for(c=0;c<r2;c++)//loop for row
    {
        for(d=0;d<c2;d++)// loop for column
        {
            printf("%d\t",m2[c][d]);
        }
    }

    //printing result
      for(c=0;c<r1;c++)//loop for row
    {
        for(d=0;d<c1;d++)// loop for column
        {
            printf("%d\t",sum[c][d]);

        }
         if(d==(c1-1))
            printf("\n\n");

    }

            }

}
