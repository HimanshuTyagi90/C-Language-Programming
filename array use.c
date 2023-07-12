#include<stdio.h>
#include<conio.h>

void main()
{
  int i,n;
printf("Storing multiple numbers using array-->\n\n");
  printf("\n enter how many numbers you want to store:");
  scanf("%d",&n);
  int number[n];
  printf("\n now enter %d numbers:",n);
  for(i=0;i<n;i++)
  scanf("%d\n",&number[i]);

  printf("your number list is as follows:\n");
  for(i=0;i<n;i++)
  printf("%d\n",number[i]);

  getch();

  }
