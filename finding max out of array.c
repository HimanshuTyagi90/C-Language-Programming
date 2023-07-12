#include<stdio.h>
#include<conio.h>

void main()
{
  int a[100],i,n,max;
  printf("\n finding maximum number out of array:->>");
  printf("\n\nENTER size of array:\n");
  scanf("%d",&n);
  printf("\n enter elements in array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=1;i<n;i++)
  {
    if(max<a[i])
    max=a[i];
  }

  printf("\n maximum number out of array is %d",max);
 getch();
}
