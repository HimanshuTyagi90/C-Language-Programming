#include<stdio.H>
#include<conio.h>

int main()
{
    int a[50],n,temp,min,location,i,j;
    printf("Selection sorting:-->>>\n");
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("\n enter elements of array:\n ");
    for(i=0;i<n;i++)
    {
        printf("enter %d element",i+1);
        scanf("%d",&a[i]);
    }
    //logic for selection sorting.
    min=a[0];

    for(int j=0;j<n;j++)
    {
        min=a[i];
        location=j;


    for(int k=j+1;k<n;k++)
    {
        if(a[j]<min)
        {
            min=a[k];
            location=k;
        }
    }

    if(location!=i)
    {
        temp=a[i];
        a[i]=a[location];
        a[location]=temp;
    }
     }
     printf("elements after selection sorting\n");
     for (int l=0;l<n;l++)
     {
         printf("\n %d",a[l]);
     }
     getch();
     return(0);
}
