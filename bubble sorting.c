#include<stdio.h>
#include<conio.h>

int  main()
{
   int n,i,j,k,temp,a[30];
   printf("\n\nBubble sorting:--->>>>\n\n");
   printf("\n enter the size of array:\n");
   scanf("%d",&n);
   printf("enter the elements of array:\n");

   for(k=0;k<n;k++)
   {
     printf("enter element %d\n",k+1);
     scanf("%d",&a[k]);
   }

   //logic for bubble sort.

   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }

     printf("\n elements after sorting:\n");
     for(int l=0;l<n;l++)
     {
        printf("\n %d",a[l]);
     }
     getch();
     return(0);
}
