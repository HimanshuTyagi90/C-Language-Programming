#include<stdio.h>
#include<conio.h>

void main()
{
   int arr[3][4],i,j;
   printf("\n\n printing matrices and its transpose using 2d array---->>\n\n");
   printf(" enter the 9 elements of array:\n");

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d",&arr[i][j]);

    }
   }

    printf("\n printing the elements as matrix--->>\n");

    for(i=0;i<3;i++)
    {
      printf("\n");
      for(j=0;j<3;j++)
      {
        printf("%d\t",arr[i][j]);
      }
    }

     printf("\n\n\n printing the transpose of the above matrix --->>\n");

    for(i=0;i<3;i++)
    {
      printf("\n");
      for(j=0;j<3;j++)
      {
        printf("%d\t",arr[j][i]);
      }
    }
getch();
}
