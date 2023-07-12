#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j=0,k=0,n;
  int even[10],odd[10];
  int A[10];

  printf("enter the no. of elements less then 10 in array:\n");
  scanf("%d",&n);
  printf("Now enter %d elements.\n",n);

  for(i=0;i<n;i++)
  {
      printf(" enter the %d element:",i+1);
      scanf("%d",&A[i]);
  }

 for(i=0;i<n;i++)
  {
    if(A[i]%2==0)
    {
    even[j]=A[i];
    j++;
    }
    else
    {
    odd[k]=A[i];
    k++;
    }
 }

   printf("list of even elements:\n ");
   for(i=0;i<j;i++)
    printf("%d\t",even[i]);

    printf("\nlist of odd elements:\n");
    for(i=0;i<k;i++)
        printf("%d\t",odd[i]);
  getch();
}

