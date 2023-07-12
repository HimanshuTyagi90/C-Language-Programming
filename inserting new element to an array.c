#include<stdio.h>
#include<conio.h>

void main()
{
  int array[100],position,c,n,value;
  printf(" \n\nInserting elements in array-->\n\n");
  printf("enter number of elements in array:");
  scanf("%d",&n);

  printf("\nYou have asked to have array size of %d elements.\n",n);

  printf("\n enter %d elements\n",n);
  for(c=0;c<n;c++)
  scanf("%d",&array[c]);

  printf("enter the location where you want to insert element:\n");
  scanf("%d",&position);

  printf(" enter the value of element to be inserted:\n");
  scanf("%d",&value);

     for(c=(n-1);c>=(position-1);c--)
     array[c+1]=array[c];

     array[position-1]=value;

     printf(" Now there are %d elements in the array.\n",n+1);

     printf("Resultant array:\n");

     for(c=0;c<(n+1);c++)
     printf("%d\n",array[c]);

   getch();
}
