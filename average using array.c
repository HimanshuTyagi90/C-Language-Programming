#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  int num[]={10,20,30,40,50,60,25,27 }, sum=0;
  float average;
  printf(" the list of elements we have is: 10,20,30,40,50,60,25,27 ");
  printf("\n enter the number of the element:\n");
  rep:
  scanf("%d",&n);
  if(n>100||n<0)
  {
  printf("\n Number of elements should be between 1 to 100");
  printf(" \n enter the number again:");
  goto rep;
  }
  if(n<100&&n>0)
  {
     for(i=0;i<n;i++)
     {
        sum=sum+num[i];
     }
  }
  average=sum/n;
  printf("\n the average of list is %.2f",average);
  getch();
}
