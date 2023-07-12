#include<stdio.h>
#include<conio.h>

float calculatesum(float arr[],int n);


int main()
{
  int i,n;
  float result, array[n];

  printf("\n Calculating Sum of all elements of array.\n");
  printf("\n Enter the range of the array\n");
  scanf("%d",&n);
  printf("\n Enter %d elements one by one.\n",n);
  for (i=0;i<n;i++)
  {
        scanf("%f",&array[i]);
  }

  // complete array age is passed to the function calculatesum

  result=calculatesum(array,n);
  printf("\n the sum is %.2f",result);
  getch();
   return(0);
}


  float calculatesum(float arr[],int n)
{
    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return (sum);
}
