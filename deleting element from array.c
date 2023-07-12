#include<stdio.h>
#include<conio.h>

void main()
{
  int array[100],position,c,n;
  printf(" deleting elements from array-->\n");
  printf("enter number of elements in array\n");
  scanf("%d",&n);

  printf("enter %d elements\n",n);

  for(c=0;c<n;c++)
  scanf("%d",&array[c]);

  printf("enter the location where you want to delete element:\n");
  scanf("%d",&position);

  if(position>=n+1)
  printf("Deletion not possible\n");
  else
   {
     for(c=position-1;c<n;c++)
     array[c]=array[c+1];

     printf("Resultant array:\n");

     for(c=0;c<n-1;c++)
     printf("%d\n",array[c]);
   }
   getch();
}
